#ifndef RAYTRACING_MATERIAL_H
#define RAYTRACING_MATERIAL_H


#include "Vector.h"

///\brief Classe des types de materiaux
class Material {
public:
    ///\brief Gère les types de lumières (speculaire/réflexive/diffuse/réfractive)
    ///\param al : couleur
    ///\param mDiff : diffraction
    ///\param mRef : reflexion
    ///\param mRefrac : refraction
    ///\param n : lumiere spéculaire
    Material(const Vector3f & al= Vector3f(0.18,0.18,0.18) ,const float & mDif=0.8, const float & mSpec=0.08, const float &mRef=1.f, const float & n=4, const float &mRefrac =0.f);
    Vector3f albedo;
    float matDiffuse;
    float matReflection;
    float matRefraction;
    float matSpecular, n;
};


#endif //RAYTRACING_MATERIAL_H
