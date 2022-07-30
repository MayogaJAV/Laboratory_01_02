//AbstractProductMacOS.h
#pragma once
class AbstractProductMacOS {
public:
	virtual ~AbstractProductMacOS() {}
	virtual std::string Draw() const = 0;
};
