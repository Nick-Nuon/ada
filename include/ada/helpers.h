#ifndef ADA_HELPERS_H
#define ADA_HELPERS_H

#include "common_defs.h"
#include "url.h"
#include "state.h"

#include <string_view>
#include <optional>

namespace ada::helpers {

  ada_really_inline std::optional<std::string_view> prune_fragment(std::string_view& input) noexcept;
  std::optional<uint16_t> get_port(std::string_view::iterator begin, std::string_view::iterator end) noexcept;
  bool parse_port(std::string_view::iterator &pointer_start,
                  std::string_view::iterator pointer_end,
                  ada::state &state,
                  bool &is_valid,
                  std::optional<uint16_t> &out,
                  bool is_url_special,
                  bool state_override_given) noexcept;

  ada_really_inline void shorten_path(ada::url &url) noexcept;
  ada_really_inline void remove_ascii_tab_or_newline(std::string& input) noexcept;
} // namespace ada::helpers

#endif // ADA_HELPERS_H
