#ifndef RAYTRACING_SPHERE_H
#define RAYTRACING_SPHERE_H


#include "Object.h"

///\brief Classe de Sphere
class Sphere : public Object{
public:
    float radius;

    ///\brief Constructeur par défaut de Sphere
    Sphere();

    ///\brief Constructeur par copie de Sphere
    ///\param pos : position de la sphere
    ///\param radius : rayon de la sphere
    ///\param material : matériau de la sphere
    Sphere(const Vector3f& pos, const float & radius,const Material &material);

    ///\brief Destructeur de Sphere
    ~Sphere() override;

    ///\brief Affiche le rayon de la Sphere
    void print() const override;

    ///\brief retourne la distance d'écart entre la surface de la sphere et le point donné
    /// @param from Point donné pour le calcul de distance
    float getDistance(const Vector3f & from) const override;

    ///\brief
    bool intersect(const Ray& ray, float&t) override;

    ///\brief Calcule la normale de la sphere
    ///\param Phit : Point touché par le rayon
    ///\param Nhit : Normale du point est touché
    ///\param tex : texture du point touché
    void getSurfaceData(const Vector3f &Phit, Vector3f &Nhit, Vector3f &tex) const override ;
};


#endif //RAYTRACING_SPHERE_H
