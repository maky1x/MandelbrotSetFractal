#pragma once
#include <string>
#include "Zoom.h"
#include <memory>
#include "Bitmap.h"
#include "ZoomList.h"
#include "Mandelbrot.h"
#include <math.h>
#include <vector>
#include <cstdint>
#include "RGB.h"

namespace maky
{
	class FractalCreator
	{
	private:
		int m_width;
		int m_height;
		std::unique_ptr<int[]> m_histogram;
		std::unique_ptr<int[]> m_fractal;
		Bitmap m_bitmap;
		ZoomList m_zoomList;
		int m_total{ 0 };

		std::vector<int> m_ranges;
		std::vector<RGB> m_colors;
		std::vector<int> m_rangeTotals;

		bool m_bGotFirstRange{ false };

		void calculateIterations();
		void calculateTotalIterations();
		void calculateRangeTotals();
		void drawFractal();
		void writeBitmap(std::string name);
		

	public:
		int getRange(int iterations) const;
		FractalCreator(int width, int height);
		virtual ~FractalCreator();

		void addRange(double rangeEnd, const RGB& rgb);
		void run(std::string name);
		void addZoom(const Zoom& zoom);
	};
}
