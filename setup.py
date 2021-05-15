"""
Universiad Sergio Arboleda sede Bogotá
Escuela de Ciencias Exactas e Ingenieria 
Ingenieria de sistemas y Telecomunicaciones - Computación Paralela y Distribuida 
Profesor Jhon Jairo Corredor Franco 
Test/Comparativa entre Python y Cython 
Trabajo realizado por Jofre Eduardo Oliveros Gavidia 
"""

#from distutils.core import setup, Extension
#from Cython.Build import cythonize
import numpy

#exts = (cythonize("Cy_simulator.pyx"))

#setup(ext_modules=exts)
from distutils.core import setup
from Cython.Build import cythonize
from Cython.Distutils import build_ext
from distutils.extension import Extension


#exts = (cythonize('Cy_functionE.pyx'))
ext_modules=[ Extension("Cy_simulator",
              ["Cy_simulator.pyx"],
              libraries=["m"],
              extra_compile_args=["-O3", "-ffast-math", "-march=native"])]

setup(name = 'Cy_simulator', cmdclass={"build_ext": build_ext},
	ext_modules=ext_modules, 
      include_dirs=[numpy.get_include()])





