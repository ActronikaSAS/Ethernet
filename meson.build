project('teensy-ethernet', 'cpp', 'c',
    version : '1.0')

assert(meson.is_cross_build(), 'Teensy projects can only be built in a cross build environment.')

teensy_core_dep = dependency('teensy-core',
    fallback: ['teensy-core', 'teensy_core_dep'])

teensy_eth_cppflags = [
    #too many warnings due to non virtual dtor in teesy-core
    '-Wno-non-virtual-dtor',
    ]

teensy_eth_incdir = include_directories('src')
teensy_eth_src = [
    'src/Dhcp.cpp',
    'src/Dns.cpp',
    'src/Ethernet.cpp',
    'src/EthernetClient.cpp',
    'src/EthernetServer.cpp',
    'src/EthernetUdp.cpp',
    'src/socket.cpp',
    'src/utility/w5100.cpp',
  ]

teensy_ethernet = static_library('teensy-ethernet', teensy_eth_src,
    include_directories : teensy_eth_incdir,
    cpp_args : teensy_eth_cppflags,
    dependencies : [teensy_core_dep])

teensy_ethernet_dep = declare_dependency(
    link_with : teensy_ethernet,
    include_directories : teensy_eth_incdir,
    )
