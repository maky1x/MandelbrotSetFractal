#include <iostream>
#include "FractalCreator.h"
#include "RGB.h"

using namespace maky;

int main()
{
	// number of iterations -> Mandelbrot.h
	FractalCreator fractalCreator(800, 600); // set image resolution here

	fractalCreator.addRange(0.0, RGB(0, 0, 255));
	fractalCreator.addRange(0.05, RGB(255, 99, 71));
	fractalCreator.addRange(0.08, RGB(255, 215, 0));
	fractalCreator.addRange(1.0, RGB(255, 255, 255));
	// colors for each range of iteration numbers

	//fractalCreator.addZoom(Zoom(701, 161, 0.1)); 
	//fractalCreator.addZoom(Zoom(929, 527, 0.1));

	//cool zoom resolutions for 800x600
	//fractalCreator.addZoom(Zoom(283, 143, 0.1));
	//fractalCreator.addZoom(Zoom(456, 331, 0.1));
	//fractalCreator.addZoom(Zoom(352, 294, 0.1));
	//fractalCreator.addZoom(Zoom(168, 282, 0.1));

	fractalCreator.run("test.bmp");

	std::cout << "Finished." << std::endl;
}