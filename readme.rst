===============================================
vsrawsource - Raw format reader for VapourSynth
===============================================
raw(uncompressed) video source filter for VapourSynth.
Also, YUV4MPEG and WindowsBitmap(24bit/32bit RGB) are supported.

Usage:
------
    >>> import vapoursynth as vs
    >>> core = vs.Core()
    >>> core.std.LoadPlugin('vsrawsource.dll')
    >>> clip = core.raws.Source('/path/to/file.raw')

options:
--------
    - **width**          video width (1~ default 720)
    - **height**         video height (1~ default 480)
    - **fpsnum**         framerate numerator (1~ default 30000)
    - **fpsden**         framerate denominator (1~ default 1001)
    - **src_fmt**        color format of source video (default 'I420')
    - **off_header**     offset to the first frame data (0~ default 0)
    - **off_frame**      offset to the real data for every frame (0~ default 0)
    - **rowbytes_align** byte alignment of all rows of frame (1~16 default 1)

    these options will be ignored if source is YUV4MPEG/WindowsBitmap.

supported color formats:
------------------------
    see format_list.txt.

How to compile:
---------------
    type as follows::

    $ git clone git://github.com/chikuzen/vsrawsource.git
    $ cd ./vsrawsource
    $ ./configure
    $ make

source code:
------------
    https://github.com/chikuzen/vsrawsource
