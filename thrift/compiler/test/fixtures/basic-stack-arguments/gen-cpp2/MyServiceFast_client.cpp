/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/MyServiceFast.h"

#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/MyServiceFast.tcc"

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

const char* MyServiceFastAsyncClient::getServiceName() {
  return "MyServiceFast";
}

void MyServiceFastAsyncClient::hasDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  hasDataById(rpcOptions, std::move(callback), id);
}

void MyServiceFastAsyncClient::hasDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      hasDataByIdT(&writer, rpcOptions, std::move(callback), id);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      hasDataByIdT(&writer, rpcOptions, std::move(callback), id);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

bool MyServiceFastAsyncClient::sync_hasDataById(int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_hasDataById(rpcOptions, id);
}

bool MyServiceFastAsyncClient::sync_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  hasDataById(rpcOptions, std::move(callback), id);
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  return recv_hasDataById(_returnState);
}

folly::Future<bool> MyServiceFastAsyncClient::future_hasDataById(int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_hasDataById(rpcOptions, id);
}

folly::Future<bool> MyServiceFastAsyncClient::future_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  folly::Promise<bool> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<bool>>(std::move(_promise), recv_wrapped_hasDataById, channel_);
  hasDataById(rpcOptions, std::move(callback), id);
  return _future;
}

folly::Future<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceFastAsyncClient::header_future_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  folly::Promise<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<bool>>(std::move(_promise), recv_wrapped_hasDataById, channel_);
  hasDataById(rpcOptions, std::move(callback), id);
  return _future;
}

void MyServiceFastAsyncClient::hasDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id) {
  hasDataById(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), id);
}

folly::exception_wrapper MyServiceFastAsyncClient::recv_wrapped_hasDataById(bool& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_hasDataByIdT(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_hasDataByIdT(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

bool MyServiceFastAsyncClient::recv_hasDataById(::apache::thrift::ClientReceiveState& state) {
  bool _return;
  auto ew = recv_wrapped_hasDataById(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

bool MyServiceFastAsyncClient::recv_instance_hasDataById(::apache::thrift::ClientReceiveState& state) {
  return recv_hasDataById(state);
}

folly::exception_wrapper MyServiceFastAsyncClient::recv_instance_wrapped_hasDataById(bool& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_hasDataById(_return, state);
}

void MyServiceFastAsyncClient::getDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  getDataById(rpcOptions, std::move(callback), id);
}

void MyServiceFastAsyncClient::getDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      getDataByIdT(&writer, rpcOptions, std::move(callback), id);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      getDataByIdT(&writer, rpcOptions, std::move(callback), id);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void MyServiceFastAsyncClient::sync_getDataById(std::string& _return, int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_getDataById(rpcOptions, _return, id);
}

void MyServiceFastAsyncClient::sync_getDataById(apache::thrift::RpcOptions& rpcOptions, std::string& _return, int64_t id) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  getDataById(rpcOptions, std::move(callback), id);
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_getDataById(_return, _returnState);
}

folly::Future<std::string> MyServiceFastAsyncClient::future_getDataById(int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_getDataById(rpcOptions, id);
}

folly::Future<std::string> MyServiceFastAsyncClient::future_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  folly::Promise<std::string> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<std::string>>(std::move(_promise), recv_wrapped_getDataById, channel_);
  getDataById(rpcOptions, std::move(callback), id);
  return _future;
}

folly::Future<std::pair<std::string, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceFastAsyncClient::header_future_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  folly::Promise<std::pair<std::string, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<std::string>>(std::move(_promise), recv_wrapped_getDataById, channel_);
  getDataById(rpcOptions, std::move(callback), id);
  return _future;
}

void MyServiceFastAsyncClient::getDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id) {
  getDataById(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), id);
}

folly::exception_wrapper MyServiceFastAsyncClient::recv_wrapped_getDataById(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_getDataByIdT(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_getDataByIdT(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyServiceFastAsyncClient::recv_getDataById(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_getDataById(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void MyServiceFastAsyncClient::recv_instance_getDataById(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_getDataById(_return, state);
}

folly::exception_wrapper MyServiceFastAsyncClient::recv_instance_wrapped_getDataById(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_getDataById(_return, state);
}

void MyServiceFastAsyncClient::putDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  putDataById(rpcOptions, std::move(callback), id, data);
}

void MyServiceFastAsyncClient::putDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      putDataByIdT(&writer, rpcOptions, std::move(callback), id, data);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      putDataByIdT(&writer, rpcOptions, std::move(callback), id, data);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void MyServiceFastAsyncClient::sync_putDataById(int64_t id, const std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_putDataById(rpcOptions, id, data);
}

void MyServiceFastAsyncClient::sync_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  putDataById(rpcOptions, std::move(callback), id, data);
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_putDataById(_returnState);
}

folly::Future<folly::Unit> MyServiceFastAsyncClient::future_putDataById(int64_t id, const std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_putDataById(rpcOptions, id, data);
}

folly::Future<folly::Unit> MyServiceFastAsyncClient::future_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_putDataById, channel_);
  putDataById(rpcOptions, std::move(callback), id, data);
  return _future;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceFastAsyncClient::header_future_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_putDataById, channel_);
  putDataById(rpcOptions, std::move(callback), id, data);
  return _future;
}

void MyServiceFastAsyncClient::putDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id, const std::string& data) {
  putDataById(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), id, data);
}

folly::exception_wrapper MyServiceFastAsyncClient::recv_wrapped_putDataById(::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_putDataByIdT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_putDataByIdT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyServiceFastAsyncClient::recv_putDataById(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_putDataById(state);
  if (ew) {
    ew.throw_exception();
  }
}

void MyServiceFastAsyncClient::recv_instance_putDataById(::apache::thrift::ClientReceiveState& state) {
  recv_putDataById(state);
}

folly::exception_wrapper MyServiceFastAsyncClient::recv_instance_wrapped_putDataById(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_putDataById(state);
}

void MyServiceFastAsyncClient::lobDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  lobDataById(rpcOptions, std::move(callback), id, data);
}

void MyServiceFastAsyncClient::lobDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      lobDataByIdT(&writer, rpcOptions, std::move(callback), id, data);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      lobDataByIdT(&writer, rpcOptions, std::move(callback), id, data);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void MyServiceFastAsyncClient::sync_lobDataById(int64_t id, const std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_lobDataById(rpcOptions, id, data);
}

void MyServiceFastAsyncClient::sync_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), true);
  lobDataById(rpcOptions, std::move(callback), id, data);
  getChannel()->getEventBase()->loopForever();
}

folly::Future<folly::Unit> MyServiceFastAsyncClient::future_lobDataById(int64_t id, const std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_lobDataById(rpcOptions, id, data);
}

folly::Future<folly::Unit> MyServiceFastAsyncClient::future_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::OneWayFutureCallback>(std::move(_promise), channel_);
  lobDataById(rpcOptions, std::move(callback), id, data);
  return _future;
}

void MyServiceFastAsyncClient::lobDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id, const std::string& data) {
  lobDataById(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), id, data);
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
