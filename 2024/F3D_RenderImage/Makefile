src = app

default: clean fmt compile execute 

fmt:
	for dir in $(src); do                                                                      \
		find $$dir -type f -iname "*.cpp" -o -iname "*.hpp" | xargs clang-format -i -style=file; \
	done

clean:
	rm -rf build

compile: clean 
	mkdir build; cd build; cmake -Df3d_DIR:PATH=~/Workspaces/f3d/build/cmake ..; make

execute:
	./build/RenderImage.out

.PHONY: default fmt clean compile execute
