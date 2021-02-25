#pragma once

#include <iostream>
#include "Lib.h"

using namespace std;

struct List* CreateList();

struct List* CreateListRandom();

void DisplayList(struct List*);

void DisplayCriterionList(struct List*);

void RemoveTermTag(struct List*);

void AddTermTag(struct List*);

void SortKol(struct List*);

void FreeList(struct List**);