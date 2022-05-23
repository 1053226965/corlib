#pragma once

namespace corlib
{
  enum class error_code
  {
    INVLIAD,
    NONE_ERROR,
    BIND_ERROR,
    SYSTEM_ERROR,
    IO_PENDING,
    TIMEOUT,
    STOPED,
    CLOSED,
    OUT_OF_MEMORY,
    NOBUFS,
    CONNREFUSED,
    AGAIN,
  };
}