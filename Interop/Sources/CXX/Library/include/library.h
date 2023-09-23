#ifndef library_library_h
#define library_library_h

namespace library {
struct Version {
  char8_t major;
  int minor;
  int patch;
};

Version version() noexcept;
}

#endif
