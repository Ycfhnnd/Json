#pragma once

#include <string>

namespace json {
class Parser {
public:
	Parser();
	void load(const std::string& str);

private:
	std::string m_str;
	int m_idx;

};
}