#pragma once
namespace maky
{
	struct RGB
	{
		RGB(double r, double g, double b);
		double r;
		double g;
		double b;
	};
	RGB operator-(const RGB& first, const RGB& second);
}

