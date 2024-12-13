#pragma once

#include <string>
#include "json.h"

namespace json {
class Parser {
public:
	Parser();
	void load(const std::string& str);
	Json parse();
private:
	std::string m_str;
	int m_idx;

	void skip_white_space();
	char get_next_token();

	Json parse_null();
	Json parse_bool();
	Json parse_number();
	std::string parse_string();
	Json parse_array();
	Json parse_object();
};
}