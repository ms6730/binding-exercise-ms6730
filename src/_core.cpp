#include <pybind11/eigen.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "integrator.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_core, m) {
     py::class_<HarmonicOscillator>(m, "HarmonicOscillator") 
         .def(py::init<>()) 
       	 .def("f", &HarmonicOscillator::f, "Compute the derivative function") 
         .def("compute_step", &HarmonicOscillator::compute_step, "Compute a single integration step")
         .def("integrate", &HarmonicOscillator::integrate, "Integrate over a number of steps",
             py::arg("stepsize"), py::arg("steps"), py::arg("init_y"));
}
