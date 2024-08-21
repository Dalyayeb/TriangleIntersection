#ifndef MohamedAli_TRIANGLE_H
#define MohamedAli_TRIANGLE_H

#include <iostream>

namespace MohamedAli {

	void crossProduct(const double a[3], const double b[3], double result[3]);
	void subtractVectors(const double a[3], const double b[3], double result[3]);
	bool isPointInsideTriangle2D(const double p[2], const double t[6]);
	bool isPointInsideTriangle3D(const double p[3], const double t[9]);
	bool segmentsIntersect(const double p1[3], const double p2[3], const double q1[3], const double q2[3]);
	bool intersection(double t1[9], double t2[9]);

} // namespace MohamedAli

#endif // MohamedAli_TRIANGLE_H