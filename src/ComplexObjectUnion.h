#ifndef RAYTRACING_COMPLEXOBJECTUNION_H
#define RAYTRACING_COMPLEXOBJECTUNION_H
#include "ComplexObject.h"

///\brief Classe permettant de creer l'union de 2 objets primitifs
class ComplexObjectUnion : public ComplexObject {
public:
    ///\brief Constructeur de ComplexObjectUnion
    ///\param _o1 : 1er objet primitif
    ///\param _o2 : 2eme objet primitif
    ComplexObjectUnion(Object * _o1, Object * _o2);

    ///\brief Destructeur de ComplexObjectUnion
    ~ComplexObjectUnion() override;
    float getDistance(const Vector3f &from) const override;
    void getSurfaceData(const Vector3f &Phit, Vector3f &Nhit, Vector3f &tex) const override;
    bool intersect(const Ray &ray, float &t) override;
    void print() const override;

};


#endif //RAYTRACING_COMPLEXOBJECTUNION_H
