//AbstractProductLinux.h
#pragma once
class AbstractProductLinux {
public:
	virtual ~AbstractProductLinux() {}
	virtual std::string Draw() const = 0;
};
