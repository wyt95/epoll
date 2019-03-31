#include <string.h>
#include <iostream>
#include "command.h"

int Command::get_cmd() {
	return cmd_;
}

char* Command::get_arg() {
	return arg_;
}

void Command::set_cmd(int cmd) {
	cmd_ = cmd;
}

void Command::set_arg(char* arg) {
	if (NULL == arg) {
		std::cout << "NULL" << std::endl;
		return;
	}

	strncpy(arg_, arg, 64);
	arg_[64] = '\0';
}