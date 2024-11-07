src = app

default: clean fmt compile execute 

fmt:
	for dir in $(src); do                                                                      \
		find $$dir -type f -iname "*.cpp" -o -iname "*.hpp" | xargs clang-format -i -style=file; \
	done

clean:
	rm -rf build

compile: clean 
	mkdir build; cd build; cmake -DVTK_DIR:PATH=~/Workspaces/f3d/vtk/build ..; make

execute:
	./build/Cube.out

.PHONY: default fmt clean compile execute
