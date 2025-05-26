from prelude import *
from QF_UF import *

SET_LOGIC("QF_UF")


def a() -> Bool:
    return Bool()


def b() -> Bool:
    return Bool()


ASSERT(OR(a(), b()))
CHECK_SAT()
