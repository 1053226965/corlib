#pragma once
#include <optional>
#include "io/io_state.hpp"
#include "io/io_context.hpp"
#include "common/coroutine/task.hpp"

#ifdef OS_WIN
#include "io/net/detail/acceptor_task_win.hpp"
#elif defined(OS_GNU_LINUX)
#include "io/net/detail/acceptor_task_linux.hpp"
#endif

namespace corlib
{
  namespace net
  {
    using accept_task_t = detail::accept_task_t<corlib::io_context_t>;

    class acceptor_t final : public detail::acceptor_base_t<corlib::io_context_t>
    {
    public:
      acceptor_t(corlib::io_context_t &io_ctx, endpoint_t const& e);
      bool valid() { return socket()->valid(); }

    private:
      
    };

    inline acceptor_t::acceptor_t(corlib::io_context_t& io_ctx, endpoint_t const& e):
      acceptor_base_t(io_ctx, e)
    {
    }
  }
}