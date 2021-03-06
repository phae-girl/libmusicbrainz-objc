#!/usr/bin/env sh

## @file genappledoc.sh
## @date Jul 30 2012
## @copyright
##   2012 Brandon LeBlanc <demosdemon@gmail.com>
##   This program is made avaliable under the terms of the MIT License.
##
## @brief Generated MBGeneratedDefines at build time.

DIRECTORY=`dirname $0`
OUTPUT="docs"
VERSION=`git rev-parse --verify master`
PUBLISH_URL="http://demosdemon.github.com/libmusicbrainz-objc/$OUTPUT/publish"

/usr/bin/env appledoc \
  --create-html \
  --create-docset \
  --project-name "libmusicbrainz-objc" \
  --project-company "MetaBrainz" \
  --project-version "$VERSION" \
  --company-id "org.metabrainz" \
  --output "$DIRECTORY/$OUTPUT" \
  --keep-undocumented-objects \
  --keep-undocumented-members \
  --search-undocumented-doc \
  --docset-feed-url "$PUBLISH_URL/%DOCSETATOMFILENAME" \
  --docset-package-url "$PUBLISH_URL/%DOCSETPACKAGEFILENAME" \
  --publish-docset \
  --keep-intermediate-files \
  --ignore "docs" \
  --ignore "submodules" \
  --ignore ".git" \
  --ignore "DerivedData" \
  --ignore "build" \
  --logformat "xcode" \
  --verbose 2 \
  --no-warn-unknown-directive \
  --no-warn-invalid-crossref\
  "$DIRECTORY"
