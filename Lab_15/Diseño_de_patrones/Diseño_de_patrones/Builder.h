#pragma once
#include <iostream>
#include <vector>
#include <iostream>
#include "Producto.h"
class Builder {
public:
	virtual ~Builder() {};
	virtual void ProducirMateriales(Componente Material) const = 0;
};
