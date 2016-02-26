// ----------------------------------------------------------------------
// Singletone.h
// ----------------------------------------------------------------------

#ifndef _SINGLETONE_H_
#define _SINGLETONE_H_

#include <assert.h>

template <typename T> 
class CSingleton 
{ 
protected:
	static T* ms_singleton ; 

public: 
	CSingleton (void) 
	{ 
		assert (!ms_singleton); 
		int offset = (int)(T*)1 - (int)(CSingleton <T>*)(T*)1 ; 
		ms_singleton = (T*)((int)this + offset) ; 
	} 
	virtual ~CSingleton (void) 
	{ 
		assert (ms_singleton) ; 
		ms_singleton = 0 ; 
	} 
	static T& GetSingleton (void) 
	{ 
		assert (ms_singleton) ; 
		return (*ms_singleton) ; 
	} 
	static T* GetSingletonPtr (void) 
	{ 
		return (ms_singleton) ; 
	} 
}; 


#endif