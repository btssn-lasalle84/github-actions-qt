#!/bin/bash
test -e .clang-format && find . -regex '.*\.\(cpp\|h\)' -exec clang-format -i --style=file {} \;
