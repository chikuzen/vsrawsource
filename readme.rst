===============================================
vsrawsource - Raw format reader for VapourSynth
===============================================
raw(uncompressed) video source filter for VapourSynth.
Also, YUV4MPEG format is supported.

Usage:
    >>> import vapoursynth as vs
    >>> core = vs.Core()
    >>> core.std.LoadPlugin('vsrawsource.dll')
    >>> clip = core.raws.Source('/path/to/file.raw')

options:
    width      video width (default 720)

    height     video height (default 480)

    fpsnum     framerate numerator (default 30000)

    fpsden     framerate denominator (default 1001)

    src_fmt    color format of source video (default 'I420')

    off_header offset to the first frame data (default 0)

    off_frame  Offset to the real data for every frame (default 0)

    these options will be ignored if source is YUV4MPEG.

supported color formats:
    see core.raws.FormatList()

How to compile:
    $ git clone git://github.com/chikuzen/vsrawsource.git
    $ cd ./vsrawsource
    $ ./configure
    $ make

source code:
    https://github.com/chikuzen/vsrawsource
