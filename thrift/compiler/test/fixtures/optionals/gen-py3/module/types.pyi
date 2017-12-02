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


class Animal(Enum):
    DOG = ...
    CAT = ...
    TARANTULA = ...
    value: int


class Color(thrift.py3.types.Struct):
    def __init__(
        self, *,
        red: float=None,
        green: float=None,
        blue: float=None,
        alpha: float=None
    ) -> None: ...

    def __call__(
        self, *,
        red: _typing.Union[float, NOTSETTYPE, None]=NOTSET,
        green: _typing.Union[float, NOTSETTYPE, None]=NOTSET,
        blue: _typing.Union[float, NOTSETTYPE, None]=NOTSET,
        alpha: _typing.Union[float, NOTSETTYPE, None]=NOTSET
    ): ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['Color'], bytes]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...
    def __bool__(self) -> bool: ...
    def __hash__(self) -> int: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'Color') -> bool: ...

    @property
    def red(self) -> float: ...
    @property
    def green(self) -> float: ...
    @property
    def blue(self) -> float: ...
    @property
    def alpha(self) -> float: ...


class Vehicle(thrift.py3.types.Struct):
    def __init__(
        self, *,
        color: 'Color'=None,
        licensePlate: str=None,
        description: str=None,
        name: str=None,
        hasAC: bool=None
    ) -> None: ...

    def __call__(
        self, *,
        color: _typing.Union['Color', NOTSETTYPE, None]=NOTSET,
        licensePlate: _typing.Union[str, NOTSETTYPE, None]=NOTSET,
        description: _typing.Union[str, NOTSETTYPE, None]=NOTSET,
        name: _typing.Union[str, NOTSETTYPE, None]=NOTSET,
        hasAC: _typing.Union[bool, NOTSETTYPE, None]=NOTSET
    ): ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['Vehicle'], bytes]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...
    def __bool__(self) -> bool: ...
    def __hash__(self) -> int: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'Vehicle') -> bool: ...

    @property
    def color(self) -> 'Color': ...
    @property
    def licensePlate(self) -> str: ...
    @property
    def description(self) -> str: ...
    @property
    def name(self) -> str: ...
    @property
    def hasAC(self) -> bool: ...


class Person(thrift.py3.types.Struct):
    def __init__(
        self, *,
        id: int=None,
        name: str=None,
        age: int=None,
        address: str=None,
        favoriteColor: 'Color'=None,
        friends: _typing.AbstractSet[int]=None,
        bestFriend: int=None,
        petNames: _typing.Mapping[Animal, str]=None,
        afraidOfAnimal: Animal=None,
        vehicles: _typing.Sequence['Vehicle']=None
    ) -> None: ...

    def __call__(
        self, *,
        id: _typing.Union[int, NOTSETTYPE, None]=NOTSET,
        name: _typing.Union[str, NOTSETTYPE, None]=NOTSET,
        age: _typing.Union[int, NOTSETTYPE, None]=NOTSET,
        address: _typing.Union[str, NOTSETTYPE, None]=NOTSET,
        favoriteColor: _typing.Union['Color', NOTSETTYPE, None]=NOTSET,
        friends: _typing.Union[_typing.AbstractSet[int], NOTSETTYPE, None]=NOTSET,
        bestFriend: _typing.Union[int, NOTSETTYPE, None]=NOTSET,
        petNames: _typing.Union[_typing.Mapping[Animal, str], NOTSETTYPE, None]=NOTSET,
        afraidOfAnimal: _typing.Union[Animal, NOTSETTYPE, None]=NOTSET,
        vehicles: _typing.Union[_typing.Sequence['Vehicle'], NOTSETTYPE, None]=NOTSET
    ): ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['Person'], bytes]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...
    def __bool__(self) -> bool: ...
    def __hash__(self) -> int: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'Person') -> bool: ...

    @property
    def id(self) -> int: ...
    @property
    def name(self) -> str: ...
    @property
    def age(self) -> int: ...
    @property
    def address(self) -> str: ...
    @property
    def favoriteColor(self) -> 'Color': ...
    @property
    def friends(self) -> _typing.AbstractSet[int]: ...
    @property
    def bestFriend(self) -> int: ...
    @property
    def petNames(self) -> _typing.Mapping[Animal, str]: ...
    @property
    def afraidOfAnimal(self) -> Animal: ...
    @property
    def vehicles(self) -> _typing.Sequence['Vehicle']: ...


class Set__i64(_typing.AbstractSet[int]):
    def __init__(self, items: _typing.AbstractSet[int]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __lt__(self, other: _typing.AbstractSet[int]) -> bool: ...
    def __add__(self, other: _typing.AbstractSet[int]) -> 'Set__i64': ...
    def isdisjoint(self, other: _typing.AbstractSet[int]) -> bool: ...
    def union(self, other: _typing.AbstractSet[int]) -> 'Set__i64': ...
    def intersection(self, other: _typing.AbstractSet[int]) -> 'Set__i64': ...
    def difference(self, other: _typing.AbstractSet[int]) -> 'Set__i64': ...
    def symmetric_difference(self, other: _typing.AbstractSet[int]) -> 'Set__i64': ...
    def issubset(self, other: _typing.AbstractSet[int]) -> bool: ...
    def issuperset(self, other: _typing.AbstractSet[int]) -> bool: ...


class Map__Animal_string(_typing.Mapping[Animal, str]):
    def __init__(self, items: _typing.Mapping[Animal, str]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __getitem__(self, key: Animal) -> str: ...
    def __iter__(self) -> _typing.Iterator[Animal]: ...


_List__VehicleT = _typing.TypeVar('_List__VehicleT', bound=_typing.Sequence['Vehicle'])


class List__Vehicle(_typing.Sequence['Vehicle']):
    def __init__(self, items: _typing.Sequence['Vehicle']=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def count(self, item: 'Vehicle') -> int: ...
    def __add__(self, other: _typing.Sequence['Vehicle']) -> 'List__Vehicle': ...
    def __radd__(self, other: _List__VehicleT) -> _List__VehicleT: ...
    def __reversed__(self) -> _typing.Iterator['Vehicle']: ...
    def __iter__(self) -> _typing.Iterator['Vehicle']: ...


PersonID = int
