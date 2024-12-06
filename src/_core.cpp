#include <pybind11/eigen.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "integrator.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_core, m) {
  py::class_<HarmonicOscillator>(m, "HarmonicOscillator")
      .def(py::init<>())
      .def("f", &HarmonicOscillator::f, "Computes the derivation")
      .def("compute_step", &HarmonicOscillator::compute_step,
           "Performs a single integration step")
      .def("integrate", &HarmonicOscillator::integrate,
           "Integrates over multiple of steps", py::arg("stepsize"),
           py::arg("steps"), py::arg("init_y"));
}
