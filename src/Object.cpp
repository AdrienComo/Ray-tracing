#include "Object.h"
#include "Material.h"

Object::Object() {
    color=Vector3f(255);
    mat= Material();
}
Object::~Object() {

}

[[maybe_unused]] void Object::debug() const {
    position.print();
    color.print();
}
