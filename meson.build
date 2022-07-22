project('environment_variable', 'c')
c_compiler = meson.get_compiler('c')
#rt_dep = c_compiler.find_library('rt')

env_dep = []
#env_dep += rt_dep
executable('env', 'envtest.c', dependencies : env_dep)
