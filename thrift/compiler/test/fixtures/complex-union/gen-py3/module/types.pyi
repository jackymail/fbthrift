#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import NOTSET, NOTSETTYPE
from thrift.py3.serializer import Protocol
import typing as _typing

import sys
import itertools
from enum import Enum


class ComplexUnionType(Enum):
    EMPTY = ...
    intValue = ...
    stringValue = ...
    intListValue = ...
    stringListValue = ...
    typedefValue = ...
    stringRef = ...
    value: int


class ComplexUnion(thrift.py3.types.Union):
    def __init__(
        self, *,
        intValue: int=None,
        stringValue: str=None,
        intListValue: _typing.Sequence[int]=None,
        stringListValue: _typing.Sequence[str]=None,
        typedefValue: _typing.Mapping[int, str]=None,
        stringRef: str=None
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...
    def __bool__(self) -> bool: ...
    def __hash__(self) -> int: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'ComplexUnion') -> bool: ...

    @property
    def intValue(self) -> int: ...
    @property
    def stringValue(self) -> str: ...
    @property
    def intListValue(self) -> _typing.Sequence[int]: ...
    @property
    def stringListValue(self) -> _typing.Sequence[str]: ...
    @property
    def typedefValue(self) -> _typing.Mapping[int, str]: ...
    @property
    def stringRef(self) -> str: ...
    @property
    def value(self) -> _typing.Union[int, str, _typing.Sequence[int], _typing.Sequence[str], _typing.Mapping[int, str], str]: ...
    @property
    def type(self) -> ComplexUnionType: ...
    def get_type(self) -> ComplexUnionType: ...


class VirtualComplexUnionType(Enum):
    EMPTY = ...
    thingOne = ...
    thingTwo = ...
    value: int


class VirtualComplexUnion(thrift.py3.types.Union):
    def __init__(
        self, *,
        thingOne: str=None,
        thingTwo: str=None
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...
    def __bool__(self) -> bool: ...
    def __hash__(self) -> int: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'VirtualComplexUnion') -> bool: ...

    @property
    def thingOne(self) -> str: ...
    @property
    def thingTwo(self) -> str: ...
    @property
    def value(self) -> _typing.Union[str, str]: ...
    @property
    def type(self) -> VirtualComplexUnionType: ...
    def get_type(self) -> VirtualComplexUnionType: ...


_List__i64T = _typing.TypeVar('_List__i64T', bound=_typing.Sequence[int])


class List__i64(_typing.Sequence[int]):
    def __init__(self, items: _typing.Sequence[int]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def count(self, item: int) -> int: ...
    def __add__(self, other: _typing.Sequence[int]) -> 'List__i64': ...
    def __radd__(self, other: _List__i64T) -> _List__i64T: ...
    def __reversed__(self) -> _typing.Iterator[int]: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


_List__stringT = _typing.TypeVar('_List__stringT', bound=_typing.Sequence[str])


class List__string(_typing.Sequence[str]):
    def __init__(self, items: _typing.Sequence[str]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def count(self, item: str) -> int: ...
    def __add__(self, other: _typing.Sequence[str]) -> 'List__string': ...
    def __radd__(self, other: _List__stringT) -> _List__stringT: ...
    def __reversed__(self) -> _typing.Iterator[str]: ...
    def __iter__(self) -> _typing.Iterator[str]: ...


class Map__i16_string(_typing.Mapping[int, str]):
    def __init__(self, items: _typing.Mapping[int, str]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __getitem__(self, key: int) -> str: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


containerTypedef = _typing.Mapping[int, str]
