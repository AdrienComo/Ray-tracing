#include "Light.h"

PointLight::PointLight(const Vector3f &p, const Vector3f &c, const float &i) {
    origin=p;
    col=c;
    intensity=i;
}
