/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/exceptions/gen-cpp2/Raiser.h"

#include "thrift/compiler/test/fixtures/exceptions/gen-cpp2/Raiser.tcc"

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

const char* RaiserAsyncClient::getServiceName() {
  return "Raiser";
}

void RaiserAsyncClient::doBland(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  doBlandImpl(false, rpcOptions, std::move(callback));
}

void RaiserAsyncClient::doBland(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  doBlandImpl(false, rpcOptions, std::move(callback));
}

void RaiserAsyncClient::doBlandImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      doBlandT(&writer, useSync, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      doBlandT(&writer, useSync, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void RaiserAsyncClient::sync_doBland() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_doBland(rpcOptions);
}

void RaiserAsyncClient::sync_doBland(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, false);
  doBlandImpl(true, rpcOptions, std::move(callback));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    _returnState.exception().throw_exception();
  }
  recv_doBland(_returnState);
}

folly::Future<folly::Unit> RaiserAsyncClient::future_doBland() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_doBland(rpcOptions);
}

folly::Future<folly::Unit> RaiserAsyncClient::future_doBland(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_doBland, channel_);
  doBland(rpcOptions, std::move(callback));
  return _future;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> RaiserAsyncClient::header_future_doBland(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_doBland, channel_);
  doBland(rpcOptions, std::move(callback));
  return _future;
}

void RaiserAsyncClient::doBland(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  doBland(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

folly::exception_wrapper RaiserAsyncClient::recv_wrapped_doBland(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_doBlandT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_doBlandT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void RaiserAsyncClient::recv_doBland(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_doBland(state);
  if (ew) {
    ew.throw_exception();
  }
}

void RaiserAsyncClient::recv_instance_doBland(::apache::thrift::ClientReceiveState& state) {
  recv_doBland(state);
}

folly::exception_wrapper RaiserAsyncClient::recv_instance_wrapped_doBland(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_doBland(state);
}

void RaiserAsyncClient::doRaise(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  doRaiseImpl(false, rpcOptions, std::move(callback));
}

void RaiserAsyncClient::doRaise(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  doRaiseImpl(false, rpcOptions, std::move(callback));
}

void RaiserAsyncClient::doRaiseImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      doRaiseT(&writer, useSync, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      doRaiseT(&writer, useSync, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void RaiserAsyncClient::sync_doRaise() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_doRaise(rpcOptions);
}

void RaiserAsyncClient::sync_doRaise(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, false);
  doRaiseImpl(true, rpcOptions, std::move(callback));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    _returnState.exception().throw_exception();
  }
  recv_doRaise(_returnState);
}

folly::Future<folly::Unit> RaiserAsyncClient::future_doRaise() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_doRaise(rpcOptions);
}

folly::Future<folly::Unit> RaiserAsyncClient::future_doRaise(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_doRaise, channel_);
  doRaise(rpcOptions, std::move(callback));
  return _future;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> RaiserAsyncClient::header_future_doRaise(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_doRaise, channel_);
  doRaise(rpcOptions, std::move(callback));
  return _future;
}

void RaiserAsyncClient::doRaise(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  doRaise(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

folly::exception_wrapper RaiserAsyncClient::recv_wrapped_doRaise(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_doRaiseT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_doRaiseT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void RaiserAsyncClient::recv_doRaise(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_doRaise(state);
  if (ew) {
    ew.throw_exception();
  }
}

void RaiserAsyncClient::recv_instance_doRaise(::apache::thrift::ClientReceiveState& state) {
  recv_doRaise(state);
}

folly::exception_wrapper RaiserAsyncClient::recv_instance_wrapped_doRaise(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_doRaise(state);
}

void RaiserAsyncClient::get200(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  get200Impl(false, rpcOptions, std::move(callback));
}

void RaiserAsyncClient::get200(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  get200Impl(false, rpcOptions, std::move(callback));
}

void RaiserAsyncClient::get200Impl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      get200T(&writer, useSync, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      get200T(&writer, useSync, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void RaiserAsyncClient::sync_get200(std::string& _return) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_get200(rpcOptions, _return);
}

void RaiserAsyncClient::sync_get200(apache::thrift::RpcOptions& rpcOptions, std::string& _return) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, false);
  get200Impl(true, rpcOptions, std::move(callback));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    _returnState.exception().throw_exception();
  }
  recv_get200(_return, _returnState);
}

folly::Future<std::string> RaiserAsyncClient::future_get200() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_get200(rpcOptions);
}

folly::Future<std::string> RaiserAsyncClient::future_get200(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::string> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<std::string>>(std::move(_promise), recv_wrapped_get200, channel_);
  get200(rpcOptions, std::move(callback));
  return _future;
}

folly::Future<std::pair<std::string, std::unique_ptr<apache::thrift::transport::THeader>>> RaiserAsyncClient::header_future_get200(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<std::string, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<std::string>>(std::move(_promise), recv_wrapped_get200, channel_);
  get200(rpcOptions, std::move(callback));
  return _future;
}

void RaiserAsyncClient::get200(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  get200(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

folly::exception_wrapper RaiserAsyncClient::recv_wrapped_get200(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_get200T(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_get200T(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void RaiserAsyncClient::recv_get200(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_get200(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void RaiserAsyncClient::recv_instance_get200(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_get200(_return, state);
}

folly::exception_wrapper RaiserAsyncClient::recv_instance_wrapped_get200(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_get200(_return, state);
}

void RaiserAsyncClient::get500(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  get500Impl(false, rpcOptions, std::move(callback));
}

void RaiserAsyncClient::get500(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  get500Impl(false, rpcOptions, std::move(callback));
}

void RaiserAsyncClient::get500Impl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      get500T(&writer, useSync, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      get500T(&writer, useSync, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void RaiserAsyncClient::sync_get500(std::string& _return) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_get500(rpcOptions, _return);
}

void RaiserAsyncClient::sync_get500(apache::thrift::RpcOptions& rpcOptions, std::string& _return) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, false);
  get500Impl(true, rpcOptions, std::move(callback));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    _returnState.exception().throw_exception();
  }
  recv_get500(_return, _returnState);
}

folly::Future<std::string> RaiserAsyncClient::future_get500() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_get500(rpcOptions);
}

folly::Future<std::string> RaiserAsyncClient::future_get500(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::string> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<std::string>>(std::move(_promise), recv_wrapped_get500, channel_);
  get500(rpcOptions, std::move(callback));
  return _future;
}

folly::Future<std::pair<std::string, std::unique_ptr<apache::thrift::transport::THeader>>> RaiserAsyncClient::header_future_get500(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<std::string, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<std::string>>(std::move(_promise), recv_wrapped_get500, channel_);
  get500(rpcOptions, std::move(callback));
  return _future;
}

void RaiserAsyncClient::get500(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  get500(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

folly::exception_wrapper RaiserAsyncClient::recv_wrapped_get500(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_get500T(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_get500T(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void RaiserAsyncClient::recv_get500(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_get500(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void RaiserAsyncClient::recv_instance_get500(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_get500(_return, state);
}

folly::exception_wrapper RaiserAsyncClient::recv_instance_wrapped_get500(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_get500(_return, state);
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
