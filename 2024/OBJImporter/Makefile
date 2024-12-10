src = app

default: clean fmt compile execute 

fmt:
	for dir in $(src); do                                                                      \
		find $$dir -type f -iname "*.cpp" -o -iname "*.hpp" | xargs clang-format -i -style=file; \
	done

clean:
	rm -rf build

compile: clean 
	mkdir build; cd build; cmake -DVTK_DIR:PATH=~/Workspaces/kitware/vtk/build ..; make

execute:
	cp ./build/VTK_App.out ./assets/DarkSiderGun && cd ./assets/DarkSiderGun && ./VTK_App.out GUN_OBJ.obj GUN_OBJ.mtl textures

.PHONY: default fmt clean compile execute
