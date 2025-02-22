// The example source from the following link
// https://github.com/f3d-app/f3d/blob/master/examples/libf3d/cpp/render-image/main.cxx

#include <f3d/engine.h>
#include <f3d/image.h>
#include <f3d/log.h>
#include <f3d/window.h>

#include <iostream>

int main(int argc, char** argv) {
  try {
    // Check inputs
    if (argc != 3) {
      return EXIT_FAILURE;
    }

    // Load static plugins
    f3d::engine::autoloadPlugins();

    // Create a offscreen window engine
    f3d::engine eng = f3d::engine::create(true);

    // add a model
    eng.getScene().add(std::string(argv[1]));

    // Set the window size and render to an image
    f3d::image img = eng.getWindow().setSize(300, 300).renderToImage();

    // Save the image to a file
    img.save(std::string(argv[2]));

    return EXIT_SUCCESS;
  } catch (const std::exception& ex) {
    f3d::log::error("F3D encountered an unexpected exception:");
    f3d::log::error(ex.what());
    exit(EXIT_FAILURE);
  }
  return 0;
}