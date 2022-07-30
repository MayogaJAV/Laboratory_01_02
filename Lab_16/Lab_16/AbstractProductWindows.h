//AbstractProductWindows.h
#pragma once
class AbstractProductWindows {
public:
	virtual ~AbstractProductWindows() {}
	virtual std::string Draw() const = 0;
};
