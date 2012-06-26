#!/usr/bin/env sh

DIRECTORY=`dirname $0`
OUTPUT="docs"
VERSION=`git rev-parse --verify master`
PUBLISH_URL="http://demosdemon.github.com/libmusicbrainz-objc/$OUTPUT/publish"

/usr/local/bin/appledoc \
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
	--logformat "xcode" \
	"$DIRECTORY"