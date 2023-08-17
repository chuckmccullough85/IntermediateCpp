G++ does not support modules without also using *-fmodules-ts*, even with the -std=c++20 flag.  This is because the modules feature is still experimental.  The -fmodules-ts flag is required to enable the experimental modules feature.

This command will compile the modules example and produce a.out.
It will also create a subdirectory called gcm.cache which contains the compiled modules.

```bash
g++ -std=c++20   -fmodules-ts *.cpp
```

The compiled module is *imported*, not included.  It is pre-compiled.  Modules will greatly improve compile times.

Eventually, the standard library will be converted to modules.