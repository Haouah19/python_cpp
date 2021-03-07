#include <pybind11/pybind11.h>

struct Human{
	Human(const std::string &name) : name(name) { }
	void setName (const std::string &name_) { name = name_ ; }
	const std::string &getName() const{ return name ; }
	
	std::string name;
};

namespace py = pybind11;

PYBIND11_MODULE(human_component, o) {
	py::class_<Human>(o, "Human",py::dynamic_attr())
		.def(py::init<const std::string &>())
		.def("getName", &Human::getName)
		.def("setName", &Human::setName);
}
