
LLVM ?= 1

ifeq ($(LLVM),1)
    LLVM_PREFIX := /opt/homebrew/opt/llvm
    CC := $(LLVM_PREFIX)/bin/clang
    CXX := $(LLVM_PREFIX)/bin/clang++
    LD := $(LLVM_PREFIX)/bin/ld.lld
    CPPFLAGS += -I$(LLVM_PREFIX)/include
    LDFLAGS += -L$(LLVM_PREFIX)/lib -fuse-ld=lld
else
    CC := clang
    CXX := clang++
    LD := ld
endif


CXXFLAGS ?= -std=c++20 -O2 -Wall -Wextra

.PHONY: clean

%:
	@if [ -f "$@.cpp" ]; then \
		$(CXX) $(CPPFLAGS) $(CXXFLAGS) "$@.cpp" -o "$@.exe" $(LDFLAGS) && \
		echo "$@.cpp -> $@.exe"; \
	else \
		echo "No source file $@.cpp"; \
		exit 1; \
	fi

clean:
	rm -f *.exe