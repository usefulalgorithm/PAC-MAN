#ifndef __UTILS_H__
#define __UTILS_H__
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "nodes.h"

bool checkTrivial(const std::string&);
bool checkFunctionEntrance(const std::string &);
bool checkFunctionReturn(const std::string &);
void printGraph(std::vector<Node>&, std::map<std::string, std::pair<int, int>>&, int, int) ;
void printMisc(std::string);
void traverse(std::vector<Node>&, std::map<std::string, std::pair<int, int>>&, int, int, std::string, int ) ;
#endif// __UTILS_H__
