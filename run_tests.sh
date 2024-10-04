if test -d build/release/tests/release; then
	cd build/release/tests/Release;
	./SimpleTest
else
	cd build/release/tests/Debug;
	./SimpleTest
fi
