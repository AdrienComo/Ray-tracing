#ifndef RAYTRACING_OBJECT_H
#define RAYTRACING_OBJECT_H

#include "Vector.h"
#include "Ray.h"
#include "Material.h"
const float kInfinity = std::numeric_limits<float>::max();
class Ray;


/// \brief Super-classe Abstraite d'objets primitif
class Object {
public:
    Position position;
    Rotation rotation;
    Vector3f color;
    Material mat;

    ///\brief Constructeur de Object
    Object();

    ///\brief Affichage console
    virtual void print() const  =0;
    /// @brief test d'intersection
    /// @return vrai si le rayon entre en intersetion avec la surface de l'objet
    virtual bool intersect(const Ray & ray, float & t) = 0;

    ///\brief Calcule l'écart entre le point donné et la surface de l'objet
    /// @param from Point donné pour le calcul de distance
    /// @return distance entre from et la surface de l'objet
    virtual float getDistance(const Vector3f & from) const =0;

    ///\brief Calcule la normale
    ///\param Phit : Point touché par le rayon
    ///\param Nhit : Normale du point est touché
    ///\param tex : texture du point touché
    virtual void getSurfaceData(const Vector3f &Phit, Vector3f &Nhit, Vector3f &tex) const =0 ;

    ///\brief Destructeur de Object
    virtual ~Object() = 0;

    [[maybe_unused]] void debug() const;
};


#endif //RAYTRACING_OBJECT_H
