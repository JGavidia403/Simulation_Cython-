/* Generated by Cython 0.29.23 */

#ifndef __PYX_HAVE__Cy_simulator
#define __PYX_HAVE__Cy_simulator

#include "Python.h"

#ifndef __PYX_HAVE_API__Cy_simulator

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C double vx;
__PYX_EXTERN_C double vy;
__PYX_EXTERN_C double px;
__PYX_EXTERN_C double py;
__PYX_EXTERN_C double mass;
__PYX_EXTERN_C PyObject *name;

#endif /* !__PYX_HAVE_API__Cy_simulator */

/* WARNING: the interface of the module init function changed in CPython 3.5. */
/* It now returns a PyModuleDef instance instead of a PyModule instance. */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initCy_simulator(void);
#else
PyMODINIT_FUNC PyInit_Cy_simulator(void);
#endif

#endif /* !__PYX_HAVE__Cy_simulator */