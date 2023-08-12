# GenericCmake
This generic cmake file can be used by the Cmake newbies or maybe someone who needs quick cmake configuration for a project.
Make sure source files are under "src" and header files under the "inc". In that configuration CmakeList can be used for whole project lifetime.

But do not remember this is not a best practice because of the "file GLOB" calls, the nature of the "file GLOB" calling when a header or source file added that causes errors because of the older caches. Do not forget to remove Cmake cache after the new file added.

Please feel free to ask any question.
