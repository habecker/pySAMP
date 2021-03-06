#ifndef CONST_H
#define CONST_H

#include <string>
#include <unordered_map>
#include <Python.h>

class SAMPConsts {
public:
	static void create();
	static std::unordered_map<std::string, int> map;

	static int get(const char* name)
	{
		std::string stringName(name);
		return SAMPConsts::map.at(stringName);
	}
};

static PyObject* pysamp_const(PyObject *self, PyObject *args)
{
	const char* key;
	if (!PyArg_ParseTuple(args, "s:Const", &key))
	{
		PyErr_Print();
		return NULL;
	}
	PyObject* out = Py_BuildValue("i", SAMPConsts::get(key));
	// delete[] key;
	return out;
}


#endif // !CONST_H
