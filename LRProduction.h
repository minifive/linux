#ifndef _LRPRODUCTION_H
#define _LRPRODUCTION_H
#include "TOKEN.h"

class LRProduction {
public: 
    int productionId;  //产生式的ID
    int pos;           //pos 在产生式中的位置
	int lookAhead;     //向前看符号
	bool operator<(const LRProduction& r) const {
		if (productionId != r.productionId)
			return productionId < r.productionId;
		if (pos != r.pos)
			return pos < r.pos;
		return lookAhead < r.lookAhead;
	}
	bool operator==(const LRProduction& r)const {
		return productionId == r.productionId && pos == r.pos && lookAhead == r.lookAhead;
	}
	bool LALRequal(const LRProduction& r)const{
		return  productionId == r.productionId && pos == r.pos && lookAhead != r.lookAhead;

	}
};

#endif //_LRPRODUCTION_H