#!/usr/bin/bash

for arch in armv7hl aarch64 x86_64; do
	rpmbuild -bb --target $arch build.spec
done

rpmbuild -bs build.spec
