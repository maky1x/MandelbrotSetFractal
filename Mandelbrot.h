#pragma once
namespace maky
{
	class Mandelbrot
	{
	public:
		static const int MAX_ITERATIONS = 15000;

	public:
		static int getIterations(double x, double y);
	};
}

