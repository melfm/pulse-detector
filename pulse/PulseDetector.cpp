




<!DOCTYPE html>
<html class="   ">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    
    
    <title>PulseDetector/lib/PulseDetector.cpp at master · mfm6/PulseDetector</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <meta property="fb:app_id" content="1401488693436528"/>

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="mfm6/PulseDetector" name="twitter:title" /><meta content="Contribute to PulseDetector development by creating an account on GitHub." name="twitter:description" /><meta content="https://avatars2.githubusercontent.com/u/1942293?s=400" name="twitter:image:src" />
<meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://avatars2.githubusercontent.com/u/1942293?s=400" property="og:image" /><meta content="mfm6/PulseDetector" property="og:title" /><meta content="https://github.com/mfm6/PulseDetector" property="og:url" /><meta content="Contribute to PulseDetector development by creating an account on GitHub." property="og:description" />

    <link rel="assets" href="https://assets-cdn.github.com/">
    <link rel="conduit-xhr" href="https://ghconduit.com:25035">
    <link rel="xhr-socket" href="/_sockets" />

    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
      <meta name="google-analytics" content="UA-3769691-2">

    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="021C3737:4760:7E9955:53937CB3" name="octolytics-dimension-request_id" /><meta content="1942293" name="octolytics-actor-id" /><meta content="mfm6" name="octolytics-actor-login" /><meta content="cf8ba669aa373b3705007b2dc10e2bf8e966cb5f020e84794e551b3aa5a709ed" name="octolytics-actor-hash" />
    

    
    
    <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico" />


    <meta content="authenticity_token" name="csrf-param" />
<meta content="XamZzX6JZovzMCMcja2KrrRLdwvEeRKIvE8Im9h8SGGvS8UGWxKxChll9y7tu9tvN/8+VBLBoGUbeDBgxXHcSw==" name="csrf-token" />

    <link href="https://assets-cdn.github.com/assets/github-1aeb426322c64c12b92d56bda5b110fc1093f75e.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://assets-cdn.github.com/assets/github2-b2cccfcac1a522b6ce675606f61388d36bf2c080.css" media="all" rel="stylesheet" type="text/css" />
    


    <meta http-equiv="x-pjax-version" content="6b9e40027b6fe719e1c3d0a9180a2d6a">

      
  <meta name="description" content="Contribute to PulseDetector development by creating an account on GitHub." />

  <meta content="1942293" name="octolytics-dimension-user_id" /><meta content="mfm6" name="octolytics-dimension-user_login" /><meta content="20599095" name="octolytics-dimension-repository_id" /><meta content="mfm6/PulseDetector" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="20599095" name="octolytics-dimension-repository_network_root_id" /><meta content="mfm6/PulseDetector" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/mfm6/PulseDetector/commits/master.atom" rel="alternate" title="Recent Commits to PulseDetector:master" type="application/atom+xml" />

  </head>


  <body class="logged_in  env-production macintosh vis-public page-blob">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div class="wrapper">
      
      
      
      


      <div class="header header-logged-in true">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/">
  <span class="mega-octicon octicon-mark-github"></span>
</a>

    
    <a href="/notifications" aria-label="You have no unread notifications" class="notification-indicator tooltipped tooltipped-s" data-hotkey="g n">
        <span class="mail-status all-read"></span>
</a>

      <div class="command-bar js-command-bar  in-repository">
          <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">

<div class="commandbar">
  <span class="message"></span>
  <input type="text" data-hotkey="s, /" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    
    data-username="mfm6"
      data-repo="mfm6/PulseDetector"
      data-branch="master"
      data-sha="75f0ad58ee83bfe91d627c219961a57711b10e4f"
  >
  <div class="display hidden"></div>
</div>

    <input type="hidden" name="nwo" value="mfm6/PulseDetector" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target" role="button" aria-haspopup="true">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container" aria-hidden="true">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item js-this-repository-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item js-all-repositories-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="help tooltipped tooltipped-s" aria-label="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

</form>
        <ul class="top-nav">
          <li class="explore"><a href="/explore">Explore</a></li>
            <li><a href="https://gist.github.com">Gist</a></li>
            <li><a href="/blog">Blog</a></li>
          <li><a href="https://help.github.com">Help</a></li>
        </ul>
      </div>

    


  <ul id="user-links">
    <li>
      <a href="/mfm6" class="name">
        <img alt="Melissa M" class=" js-avatar" data-user="1942293" height="20" src="https://avatars1.githubusercontent.com/u/1942293?s=140" width="20" /> mfm6
      </a>
    </li>

    <li class="new-menu dropdown-toggle js-menu-container">
      <a href="#" class="js-menu-target tooltipped tooltipped-s" aria-label="Create new...">
        <span class="octicon octicon-plus"></span>
        <span class="dropdown-arrow"></span>
      </a>

      <div class="new-menu-content js-menu-content">
      </div>
    </li>

    <li>
      <a href="/settings/profile" id="account_settings"
        class="tooltipped tooltipped-s"
        aria-label="Account settings ">
        <span class="octicon octicon-tools"></span>
      </a>
    </li>
    <li>
      <form class="logout-form" action="/logout" method="post">
        <button class="sign-out-button tooltipped tooltipped-s" aria-label="Sign out">
          <span class="octicon octicon-sign-out"></span>
        </button>
      </form>
    </li>

  </ul>

<div class="js-new-dropdown-contents hidden">
  

<ul class="dropdown-menu">
  <li>
    <a href="/new"><span class="octicon octicon-repo"></span> New repository</a>
  </li>
  <li>
    <a href="/organizations/new"><span class="octicon octicon-organization"></span> New organization</a>
  </li>


    <li class="section-title">
      <span title="mfm6/PulseDetector">This repository</span>
    </li>
      <li>
        <a href="/mfm6/PulseDetector/issues/new"><span class="octicon octicon-issue-opened"></span> New issue</a>
      </li>
      <li>
        <a href="/mfm6/PulseDetector/settings/collaboration"><span class="octicon octicon-person"></span> New collaborator</a>
      </li>
</ul>

</div>


    
  </div>
</div>

      

        



      <div id="start-of-content" class="accessibility-aid"></div>
          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    <div id="js-flash-container">
      
    </div>
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        

<ul class="pagehead-actions">

    <li class="subscription">
      <form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="AyG2lEz4ovEB9u0HyXZscqhwwrXKeUpy4souwD4qWhhwzmnlIXcGAcwpDHKcU0sE3pt+DfyoOjzvkaFRAq3Jcg==" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="20599095" />

    <div class="select-menu js-menu-container js-select-menu">
      <a class="social-count js-social-count" href="/mfm6/PulseDetector/watchers">
        1
      </a>
      <span class="minibutton select-menu-button with-count js-menu-target" role="button" tabindex="0" aria-haspopup="true">
        <span class="js-select-button">
          <span class="octicon octicon-eye"></span>
          Unwatch
        </span>
      </span>

      <div class="select-menu-modal-holder">
        <div class="select-menu-modal subscription-menu-modal js-menu-content" aria-hidden="true">
          <div class="select-menu-header">
            <span class="select-menu-title">Notification status</span>
            <span class="octicon octicon-x js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-list js-navigation-container" role="menu">

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_included" name="do" type="radio" value="included" />
                <h4>Not watching</h4>
                <span class="description">You only receive notifications for conversations in which you participate or are @mentioned.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye"></span>
                  Watch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input checked="checked" id="do_subscribed" name="do" type="radio" value="subscribed" />
                <h4>Watching</h4>
                <span class="description">You receive notifications for all conversations in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye"></span>
                  Unwatch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_ignore" name="do" type="radio" value="ignore" />
                <h4>Ignoring</h4>
                <span class="description">You do not receive any notifications for conversations in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-mute"></span>
                  Stop ignoring
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

</form>
    </li>

  <li>
  

  <div class="js-toggler-container js-social-container starring-container ">

    <form accept-charset="UTF-8" action="/mfm6/PulseDetector/unstar" class="js-toggler-form starred" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="gGaZxDQM47AkOQdaRLhDHI3SG+ZJhWO/GyRPlLDAtyL1HBw++3tiyXQDuydBioGlXh00wGcq83/7yKp/6BMnCQ==" /></div>
      <button
        class="minibutton with-count js-toggler-target star-button"
        aria-label="Unstar this repository" title="Unstar mfm6/PulseDetector">
        <span class="octicon octicon-star"></span><span class="text">Unstar</span>
      </button>
        <a class="social-count js-social-count" href="/mfm6/PulseDetector/stargazers">
          1
        </a>
</form>
    <form accept-charset="UTF-8" action="/mfm6/PulseDetector/star" class="js-toggler-form unstarred" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="N63wqwvf+Vv3xnDJFivcSkdhHW8QkCSnl7Zptx5DtjDWj+Pu6icswWimqitM05tHLTvIDE2mV4HHn09P7j6A7w==" /></div>
      <button
        class="minibutton with-count js-toggler-target star-button"
        aria-label="Star this repository" title="Star mfm6/PulseDetector">
        <span class="octicon octicon-star"></span><span class="text">Star</span>
      </button>
        <a class="social-count js-social-count" href="/mfm6/PulseDetector/stargazers">
          1
        </a>
</form>  </div>

  </li>


        <li>
          <a href="/mfm6/PulseDetector/fork" class="minibutton with-count js-toggler-target fork-button lighter tooltipped-n" title="Fork your own copy of mfm6/PulseDetector to your account" aria-label="Fork your own copy of mfm6/PulseDetector to your account" rel="facebox nofollow">
            <span class="octicon octicon-repo-forked"></span><span class="text">Fork</span>
          </a>
          <a href="/mfm6/PulseDetector/network" class="social-count">0</a>
        </li>


</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="repo-label"><span>public</span></span>
          <span class="mega-octicon octicon-repo"></span>
          <span class="author"><a href="/mfm6" class="url fn" itemprop="url" rel="author"><span itemprop="title">mfm6</span></a></span><!--
       --><span class="path-divider">/</span><!--
       --><strong><a href="/mfm6/PulseDetector" class="js-current-repository js-repo-home-link">PulseDetector</a></strong>

          <span class="page-context-loader">
            <img alt="" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
          </span>

        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">
      <div class="repository-with-sidebar repo-container new-discussion-timeline js-new-discussion-timeline  ">
        <div class="repository-sidebar clearfix">
            

<div class="sunken-menu vertical-right repo-nav js-repo-nav js-repository-container-pjax js-octicon-loaders">
  <div class="sunken-menu-contents">
    <ul class="sunken-menu-group">
      <li class="tooltipped tooltipped-w" aria-label="Code">
        <a href="/mfm6/PulseDetector" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-hotkey="g c" data-pjax="true" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /mfm6/PulseDetector">
          <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

        <li class="tooltipped tooltipped-w" aria-label="Issues">
          <a href="/mfm6/PulseDetector/issues" aria-label="Issues" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-hotkey="g i" data-selected-links="repo_issues /mfm6/PulseDetector/issues">
            <span class="octicon octicon-issue-opened"></span> <span class="full-word">Issues</span>
            <span class='counter'>0</span>
            <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>

      <li class="tooltipped tooltipped-w" aria-label="Pull Requests">
        <a href="/mfm6/PulseDetector/pulls" aria-label="Pull Requests" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-hotkey="g p" data-selected-links="repo_pulls /mfm6/PulseDetector/pulls">
            <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull Requests</span>
            <span class='counter'>0</span>
            <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


        <li class="tooltipped tooltipped-w" aria-label="Wiki">
          <a href="/mfm6/PulseDetector/wiki" aria-label="Wiki" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-hotkey="g w" data-selected-links="repo_wiki /mfm6/PulseDetector/wiki">
            <span class="octicon octicon-book"></span> <span class="full-word">Wiki</span>
            <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>
    </ul>
    <div class="sunken-menu-separator"></div>
    <ul class="sunken-menu-group">

      <li class="tooltipped tooltipped-w" aria-label="Pulse">
        <a href="/mfm6/PulseDetector/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="pulse /mfm6/PulseDetector/pulse">
          <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped tooltipped-w" aria-label="Graphs">
        <a href="/mfm6/PulseDetector/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_graphs repo_contributors /mfm6/PulseDetector/graphs">
          <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped tooltipped-w" aria-label="Network">
        <a href="/mfm6/PulseDetector/network" aria-label="Network" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-selected-links="repo_network /mfm6/PulseDetector/network">
          <span class="octicon octicon-repo-forked"></span> <span class="full-word">Network</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>
    </ul>


      <div class="sunken-menu-separator"></div>
      <ul class="sunken-menu-group">
        <li class="tooltipped tooltipped-w" aria-label="Settings">
          <a href="/mfm6/PulseDetector/settings" aria-label="Settings" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_settings /mfm6/PulseDetector/settings">
            <span class="octicon octicon-tools"></span> <span class="full-word">Settings</span>
            <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>
      </ul>
  </div>
</div>

              <div class="only-with-full-nav">
                

  

<div class="clone-url "
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=push">
  <h3><strong>HTTPS</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/mfm6/PulseDetector.git" readonly="readonly">
    <span class="url-box-clippy">
    <button aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="https://github.com/mfm6/PulseDetector.git" data-copied-hint="copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  

<div class="clone-url open"
  data-protocol-type="ssh"
  data-url="/users/set_protocol?protocol_selector=ssh&amp;protocol_type=push">
  <h3><strong>SSH</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="git@github.com:mfm6/PulseDetector.git" readonly="readonly">
    <span class="url-box-clippy">
    <button aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="git@github.com:mfm6/PulseDetector.git" data-copied-hint="copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=push">
  <h3><strong>Subversion</strong> checkout URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/mfm6/PulseDetector" readonly="readonly">
    <span class="url-box-clippy">
    <button aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="https://github.com/mfm6/PulseDetector" data-copied-hint="copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>


<p class="clone-options">You can clone with
      <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>,
      <a href="#" class="js-clone-selector" data-protocol="ssh">SSH</a>,
      or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <span class="help tooltipped tooltipped-n" aria-label="Get help on which URL is right for you.">
    <a href="https://help.github.com/articles/which-remote-url-should-i-use">
    <span class="octicon octicon-question"></span>
    </a>
  </span>
</p>

  <a href="http://mac.github.com" data-url="github-mac://openRepo/https://github.com/mfm6/PulseDetector" class="minibutton sidebar-button js-conduit-rewrite-url" title="Save mfm6/PulseDetector to your computer and use it in GitHub Desktop." aria-label="Save mfm6/PulseDetector to your computer and use it in GitHub Desktop.">
    <span class="octicon octicon-device-desktop"></span>
    Clone in Desktop
  </a>


                <a href="/mfm6/PulseDetector/archive/master.zip"
                   class="minibutton sidebar-button"
                   aria-label="Download mfm6/PulseDetector as a zip file"
                   title="Download mfm6/PulseDetector as a zip file"
                   rel="nofollow">
                  <span class="octicon octicon-cloud-download"></span>
                  Download ZIP
                </a>
              </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          


<a href="/mfm6/PulseDetector/blob/4a66a05df534473c714e8342f6749c7c52eacc75/lib/PulseDetector.cpp" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:7f70cc64020d6679510a202ec1d28bb5 -->

<p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

<a href="/mfm6/PulseDetector/find/master" data-pjax data-hotkey="t" class="js-show-file-finder" style="display:none">Show File Finder</a>

<div class="file-navigation">
  

<div class="select-menu js-menu-container js-select-menu" >
  <span class="minibutton select-menu-button js-menu-target" data-hotkey="w"
    data-master-branch="master"
    data-ref="master"
    role="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <span class="octicon octicon-git-branch"></span>
    <i>branch:</i>
    <span class="js-select-button">master</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-x js-menu-close"></span>
      </div> <!-- /.select-menu-header -->

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Find or create a branch…" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Find or create a branch…">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div><!-- /.select-menu-tabs -->
      </div><!-- /.select-menu-filters -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mfm6/PulseDetector/blob/master/lib/PulseDetector.cpp"
                 data-name="master"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="master">master</a>
            </div> <!-- /.select-menu-item -->
        </div>

          <form accept-charset="UTF-8" action="/mfm6/PulseDetector/branches" class="js-create-branch select-menu-item select-menu-new-item-form js-navigation-item js-new-item-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="dJH+5pbXvYlzofo0HODa3KJJjt6PgcxbJLk3gyAMkGHZHUfjRvQ1W64Jjyc+haApAmllDtP1OwpevVblT9SQWQ==" /></div>
            <span class="octicon octicon-git-branch select-menu-item-icon"></span>
            <div class="select-menu-item-text">
              <h4>Create branch: <span class="js-new-item-name"></span></h4>
              <span class="description">from ‘master’</span>
            </div>
            <input type="hidden" name="name" id="name" class="js-new-item-value">
            <input type="hidden" name="branch" id="branch" value="master" />
            <input type="hidden" name="path" id="path" value="lib/PulseDetector.cpp" />
          </form> <!-- /.select-menu-item -->

      </div> <!-- /.select-menu-list -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

    </div> <!-- /.select-menu-modal -->
  </div> <!-- /.select-menu-modal-holder -->
</div> <!-- /.select-menu -->

  <div class="breadcrumb">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/mfm6/PulseDetector" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">PulseDetector</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/mfm6/PulseDetector/tree/master/lib" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">lib</span></a></span><span class="separator"> / </span><strong class="final-path">PulseDetector.cpp</strong> <button aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="lib/PulseDetector.cpp" data-copied-hint="copied!" type="button"><span class="octicon octicon-clippy"></span></button>
  </div>
</div>


  <div class="commit file-history-tease">
      <img alt="mozifian" class="main-avatar js-avatar" data-user="4677901" height="24" src="https://avatars1.githubusercontent.com/u/4677901?s=140" width="24" />
      <span class="author"><a href="/mozifian" rel="contributor">mozifian</a></span>
      <time datetime="2014-06-07T19:12:50+01:00" is="relative-time">June 07, 2014</time>
      <div class="commit-title">
          <a href="/mfm6/PulseDetector/commit/5b06402db6746386a92b8fb48e076b8578569590" class="message" data-pjax="true" title="re-structured">re-structured</a>
      </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong>  contributor</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
          <li class="facebox-user-list-item">
            <img alt="mozifian" class=" js-avatar" data-user="4677901" height="24" src="https://avatars1.githubusercontent.com/u/4677901?s=140" width="24" />
            <a href="/mozifian">mozifian</a>
          </li>
      </ul>
    </div>
  </div>

<div class="file-box">
  <div class="file">
    <div class="meta clearfix">
      <div class="info file-name">
        <span class="icon"><b class="octicon octicon-file-text"></b></span>
        <span class="mode" title="File Mode">file</span>
        <span class="meta-divider"></span>
          <span>492 lines (421 sloc)</span>
          <span class="meta-divider"></span>
        <span>15.374 kb</span>
      </div>
      <div class="actions">
        <div class="button-group">
            <a class="minibutton tooltipped tooltipped-w js-conduit-openfile-check"
               href="http://mac.github.com"
               data-url="github-mac://openRepo/https://github.com/mfm6/PulseDetector?branch=master&amp;filepath=lib%2FPulseDetector.cpp"
               aria-label="Open this file in GitHub for Mac"
               data-failed-title="Your version of GitHub for Mac is too old to open this file. Try checking for updates.">
                <span class="octicon octicon-device-desktop"></span> Open
            </a>
                <a class="minibutton js-update-url-with-hash"
                   href="/mfm6/PulseDetector/edit/master/lib/PulseDetector.cpp"
                   data-method="post" rel="nofollow" data-hotkey="e">Edit</a>
          <a href="/mfm6/PulseDetector/raw/master/lib/PulseDetector.cpp" class="button minibutton " id="raw-url">Raw</a>
            <a href="/mfm6/PulseDetector/blame/master/lib/PulseDetector.cpp" class="button minibutton js-update-url-with-hash">Blame</a>
          <a href="/mfm6/PulseDetector/commits/master/lib/PulseDetector.cpp" class="button minibutton " rel="nofollow">History</a>
        </div><!-- /.button-group -->

            <a class="minibutton danger empty-icon"
               href="/mfm6/PulseDetector/delete/master/lib/PulseDetector.cpp"
               data-method="post" data-test-id="delete-blob-file" rel="nofollow">

          Delete
        </a>
      </div><!-- /.actions -->
    </div>
      
  <div class="blob-wrapper data type-c js-blob-data">
       <table class="file-code file-diff tab-size-8">
         <tr class="file-code-line">
           <td class="blob-line-nums">
             <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>
<span id="L434" rel="#L434">434</span>
<span id="L435" rel="#L435">435</span>
<span id="L436" rel="#L436">436</span>
<span id="L437" rel="#L437">437</span>
<span id="L438" rel="#L438">438</span>
<span id="L439" rel="#L439">439</span>
<span id="L440" rel="#L440">440</span>
<span id="L441" rel="#L441">441</span>
<span id="L442" rel="#L442">442</span>
<span id="L443" rel="#L443">443</span>
<span id="L444" rel="#L444">444</span>
<span id="L445" rel="#L445">445</span>
<span id="L446" rel="#L446">446</span>
<span id="L447" rel="#L447">447</span>
<span id="L448" rel="#L448">448</span>
<span id="L449" rel="#L449">449</span>
<span id="L450" rel="#L450">450</span>
<span id="L451" rel="#L451">451</span>
<span id="L452" rel="#L452">452</span>
<span id="L453" rel="#L453">453</span>
<span id="L454" rel="#L454">454</span>
<span id="L455" rel="#L455">455</span>
<span id="L456" rel="#L456">456</span>
<span id="L457" rel="#L457">457</span>
<span id="L458" rel="#L458">458</span>
<span id="L459" rel="#L459">459</span>
<span id="L460" rel="#L460">460</span>
<span id="L461" rel="#L461">461</span>
<span id="L462" rel="#L462">462</span>
<span id="L463" rel="#L463">463</span>
<span id="L464" rel="#L464">464</span>
<span id="L465" rel="#L465">465</span>
<span id="L466" rel="#L466">466</span>
<span id="L467" rel="#L467">467</span>
<span id="L468" rel="#L468">468</span>
<span id="L469" rel="#L469">469</span>
<span id="L470" rel="#L470">470</span>
<span id="L471" rel="#L471">471</span>
<span id="L472" rel="#L472">472</span>
<span id="L473" rel="#L473">473</span>
<span id="L474" rel="#L474">474</span>
<span id="L475" rel="#L475">475</span>
<span id="L476" rel="#L476">476</span>
<span id="L477" rel="#L477">477</span>
<span id="L478" rel="#L478">478</span>
<span id="L479" rel="#L479">479</span>
<span id="L480" rel="#L480">480</span>
<span id="L481" rel="#L481">481</span>
<span id="L482" rel="#L482">482</span>
<span id="L483" rel="#L483">483</span>
<span id="L484" rel="#L484">484</span>
<span id="L485" rel="#L485">485</span>
<span id="L486" rel="#L486">486</span>
<span id="L487" rel="#L487">487</span>
<span id="L488" rel="#L488">488</span>
<span id="L489" rel="#L489">489</span>
<span id="L490" rel="#L490">490</span>
<span id="L491" rel="#L491">491</span>

           </td>
           <td class="blob-line-code"><div class="code-body highlight"><pre><div class='line' id='LC1'><span class="cp">#include &quot;PulseDetector.h&quot;</span></div><div class='line' id='LC2'><span class="cp">#include &lt;stdio.h&gt;</span></div><div class='line' id='LC3'><span class="cp">#include &lt;cstdio&gt;</span></div><div class='line' id='LC4'><span class="cp">#include &lt;algorithm&gt;</span></div><div class='line' id='LC5'><span class="cp">#include &lt;iterator&gt;</span></div><div class='line' id='LC6'><span class="cp">#include &lt;list&gt; </span></div><div class='line' id='LC7'><span class="cp">#include &lt;fstream&gt;</span></div><div class='line' id='LC8'><span class="cp">#include &lt;string.h&gt;</span></div><div class='line' id='LC9'><span class="cp">#include &lt;stdlib.h&gt;</span></div><div class='line' id='LC10'><br/></div><div class='line' id='LC11'><span class="cp">#include &lt;iostream&gt;</span></div><div class='line' id='LC12'><span class="cp">#include &lt;string&gt;</span></div><div class='line' id='LC13'><span class="cp">#include &lt;vector&gt;</span></div><div class='line' id='LC14'><br/></div><div class='line' id='LC15'><span class="c1">//</span></div><div class='line' id='LC16'><span class="c1">// PulseDetector</span></div><div class='line' id='LC17'><span class="c1">//</span></div><div class='line' id='LC18'><span class="kt">void</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">run</span><span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC19'><br/></div><div class='line' id='LC20'>	<span class="c1">// Setup classifier</span></div><div class='line' id='LC21'>	<span class="n">cv</span><span class="o">::</span><span class="n">CascadeClassifier</span> <span class="n">faceClassifier</span><span class="p">;</span></div><div class='line' id='LC22'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">faceClassifier</span><span class="p">.</span><span class="n">load</span><span class="p">(</span><span class="s">&quot;haarcascade_frontalface_alt.xml&quot;</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC23'>		<span class="n">cerr</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;Unable to load face classifier.</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span></div><div class='line' id='LC24'>		<span class="n">exit</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC25'>	<span class="p">}</span></div><div class='line' id='LC26'>	<span class="c1">// Open camera device</span></div><div class='line' id='LC27'>	<span class="n">cv</span><span class="o">::</span><span class="n">VideoCapture</span> <span class="n">camera</span><span class="p">;</span></div><div class='line' id='LC28'><br/></div><div class='line' id='LC29'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">camera</span><span class="p">.</span><span class="n">open</span><span class="p">(</span><span class="mi">0</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC30'>		<span class="n">cerr</span> <span class="o">&lt;&lt;</span> <span class="s">&quot;Unable to initialise camera.</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span></div><div class='line' id='LC31'>		<span class="n">exit</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span>		</div><div class='line' id='LC32'>	<span class="p">}</span></div><div class='line' id='LC33'><br/></div><div class='line' id='LC34'>	<span class="c1">// Create a window for showing video</span></div><div class='line' id='LC35'>	<span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">windowName</span> <span class="o">=</span> <span class="s">&quot;BPM Monitor&quot;</span><span class="p">;</span></div><div class='line' id='LC36'>	<span class="n">cv</span><span class="o">::</span><span class="n">namedWindow</span><span class="p">(</span><span class="n">windowName</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC37'>	<span class="n">cv</span><span class="o">::</span><span class="n">moveWindow</span><span class="p">(</span><span class="n">windowName</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC38'><br/></div><div class='line' id='LC39'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// Create PulseData object</span></div><div class='line' id='LC40'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">PU</span> <span class="n">pdata</span><span class="p">;</span></div><div class='line' id='LC41'><br/></div><div class='line' id='LC42'>	<span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">windowGraph</span> <span class="o">=</span> <span class="s">&quot;BPM Graph&quot;</span><span class="p">;</span></div><div class='line' id='LC43'>	<span class="n">cv</span><span class="o">::</span><span class="n">namedWindow</span><span class="p">(</span><span class="n">windowGraph</span><span class="p">);</span></div><div class='line' id='LC44'><br/></div><div class='line' id='LC45'>	<span class="n">cv</span><span class="o">::</span><span class="n">Mat</span> <span class="n">graph</span> <span class="o">=</span> <span class="n">cv</span><span class="o">::</span><span class="n">Mat</span><span class="o">::</span><span class="n">zeros</span><span class="p">(</span><span class="n">BPM_GRAPH_HEIGHT</span><span class="p">,</span> <span class="n">BPM_GRAPH_WIDTH</span><span class="p">,</span> <span class="n">CV_8UC3</span><span class="p">);</span></div><div class='line' id='LC46'>	<span class="n">cv</span><span class="o">::</span><span class="n">imshow</span><span class="p">(</span><span class="n">windowGraph</span><span class="p">,</span> <span class="n">graph</span><span class="p">);</span></div><div class='line' id='LC47'>	<span class="c1">// Column, Row - Place down in middle</span></div><div class='line' id='LC48'>	<span class="n">cv</span><span class="o">::</span><span class="n">moveWindow</span><span class="p">(</span><span class="n">windowGraph</span><span class="p">,</span><span class="mi">650</span><span class="p">,</span><span class="mi">450</span><span class="p">);</span></div><div class='line' id='LC49'>	<span class="n">cv</span><span class="o">::</span><span class="n">imshow</span><span class="p">(</span><span class="n">windowGraph</span><span class="p">,</span> <span class="n">graph</span><span class="p">);</span></div><div class='line' id='LC50'><br/></div><div class='line' id='LC51'>	<span class="c1">// Start clock for timestamping</span></div><div class='line' id='LC52'>	<span class="n">_start</span> <span class="o">=</span> <span class="n">boost</span><span class="o">::</span><span class="n">chrono</span><span class="o">::</span><span class="n">system_clock</span><span class="o">::</span><span class="n">now</span><span class="p">();</span></div><div class='line' id='LC53'><br/></div><div class='line' id='LC54'>	<span class="c1">// Video processing loop</span></div><div class='line' id='LC55'>	<span class="kt">bool</span> <span class="n">processing</span> <span class="o">=</span> <span class="nb">true</span><span class="p">;</span></div><div class='line' id='LC56'>	<span class="kt">bool</span> <span class="n">monitoring</span> <span class="o">=</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC57'>	<span class="c1">//double gap;</span></div><div class='line' id='LC58'>	<span class="k">while</span> <span class="p">(</span><span class="n">processing</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC59'>		<span class="c1">// Read frame</span></div><div class='line' id='LC60'>		<span class="n">cv</span><span class="o">::</span><span class="n">Mat</span> <span class="n">frameOriginal</span><span class="p">,</span> <span class="n">frameGreyscale</span><span class="p">,</span> <span class="n">daGrayFace</span> <span class="p">,</span> <span class="n">scaleddaGrayFace</span><span class="p">;</span></div><div class='line' id='LC61'>		<span class="n">camera</span><span class="p">.</span><span class="n">read</span><span class="p">(</span><span class="n">frameOriginal</span><span class="p">);</span></div><div class='line' id='LC62'>		<span class="c1">// Get some sleep after every read</span></div><div class='line' id='LC63'>		<span class="c1">// This is important specially or the frame rate will be too fast for the algorithm</span></div><div class='line' id='LC64'>		<span class="n">cv</span><span class="o">::</span><span class="n">waitKey</span><span class="p">(</span><span class="mi">50</span><span class="p">);</span> </div><div class='line' id='LC65'><br/></div><div class='line' id='LC66'>		<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">frameOriginal</span><span class="p">.</span><span class="n">empty</span><span class="p">())</span> <span class="p">{</span></div><div class='line' id='LC67'>			<span class="n">cv</span><span class="o">::</span><span class="n">Scalar</span> <span class="n">color</span><span class="p">(</span><span class="mi">255</span><span class="p">,</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC68'>			<span class="c1">// Convert image to gray scale and equalize</span></div><div class='line' id='LC69'>			<span class="n">cv</span><span class="o">::</span><span class="n">flip</span><span class="p">(</span><span class="n">frameOriginal</span><span class="p">,</span> <span class="n">frameOriginal</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC70'>			<span class="n">cv</span><span class="o">::</span><span class="n">cvtColor</span><span class="p">(</span><span class="n">frameOriginal</span><span class="p">,</span> <span class="n">frameGreyscale</span><span class="p">,</span> <span class="n">CV_BGR2GRAY</span><span class="p">);</span></div><div class='line' id='LC71'>			<span class="n">cv</span><span class="o">::</span><span class="n">equalizeHist</span><span class="p">(</span><span class="n">frameGreyscale</span><span class="p">,</span> <span class="n">frameGreyscale</span><span class="p">);</span></div><div class='line' id='LC72'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// Detect faces</span></div><div class='line' id='LC73'>				<span class="n">vector</span><span class="o">&lt;</span><span class="n">cv</span><span class="o">::</span><span class="n">Rect</span><span class="o">&gt;</span> <span class="n">faces</span><span class="p">;</span></div><div class='line' id='LC74'>				<span class="n">faceClassifier</span><span class="p">.</span><span class="n">detectMultiScale</span><span class="p">(</span><span class="n">frameGreyscale</span><span class="p">,</span> <span class="n">faces</span><span class="p">,</span> <span class="mf">1.1</span><span class="p">,</span> <span class="mi">3</span><span class="p">,</span></div><div class='line' id='LC75'>					<span class="n">CV_HAAR_FIND_BIGGEST_OBJECT</span> <span class="o">|</span> <span class="n">CV_HAAR_SCALE_IMAGE</span><span class="p">,</span></div><div class='line' id='LC76'>					<span class="n">cv</span><span class="o">::</span><span class="n">Size</span><span class="p">(</span><span class="mi">30</span><span class="p">,</span> <span class="mi">30</span><span class="p">));</span></div><div class='line' id='LC77'><br/></div><div class='line' id='LC78'>				<span class="c1">// We have detected a face</span></div><div class='line' id='LC79'>				<span class="c1">// Draw boxes around detected faces and their foreheads</span></div><div class='line' id='LC80'>				<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">faces</span><span class="p">.</span><span class="n">empty</span><span class="p">())</span> <span class="p">{</span></div><div class='line' id='LC81'>					<span class="n">cv</span><span class="o">::</span><span class="n">Rect</span> <span class="n">fh</span><span class="p">;</span></div><div class='line' id='LC82'>					<span class="n">cv</span><span class="o">::</span><span class="n">Rect</span> <span class="n">grabbedFace</span><span class="p">;</span></div><div class='line' id='LC83'>					<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">faces</span><span class="p">.</span><span class="n">size</span><span class="p">();</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC84'><br/></div><div class='line' id='LC85'>						<span class="c1">// draw a green rectangle around the face over the original image</span></div><div class='line' id='LC86'>						<span class="k">if</span><span class="p">(</span><span class="o">!</span><span class="n">monitoring</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC87'>							<span class="n">getForehead</span><span class="p">(</span><span class="n">faces</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="n">fh</span><span class="p">);</span></div><div class='line' id='LC88'>							<span class="c1">// This is locks the forehead</span></div><div class='line' id='LC89'>							<span class="n">getForehead</span><span class="p">(</span><span class="n">faces</span><span class="p">[</span><span class="mi">0</span><span class="p">],</span> <span class="n">_forehead</span><span class="p">);</span> <span class="c1">// Save forehead of 1st captured face</span></div><div class='line' id='LC90'>							<span class="n">cv</span><span class="o">::</span><span class="n">rectangle</span><span class="p">(</span><span class="n">frameOriginal</span><span class="p">,</span> <span class="n">faces</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="n">cv</span><span class="o">::</span><span class="n">Scalar</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">),</span> <span class="mi">1</span><span class="p">,</span> <span class="mi">8</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC91'>							<span class="n">cv</span><span class="o">::</span><span class="n">putText</span><span class="p">(</span><span class="n">frameOriginal</span><span class="p">,</span> <span class="s">&quot;Face&quot;</span><span class="p">,</span> <span class="n">cv</span><span class="o">::</span><span class="n">Point</span><span class="p">(</span><span class="n">faces</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">x</span><span class="p">,</span> <span class="n">faces</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">y</span><span class="p">),</span> <span class="n">CV_FONT_HERSHEY_PLAIN</span><span class="p">,</span> <span class="mf">1.2</span><span class="p">,</span> <span class="n">color</span><span class="p">);</span></div><div class='line' id='LC92'>							<span class="n">cv</span><span class="o">::</span><span class="n">rectangle</span><span class="p">(</span><span class="n">frameOriginal</span><span class="p">,</span> <span class="n">fh</span><span class="p">,</span> <span class="n">cv</span><span class="o">::</span><span class="n">Scalar</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">0</span><span class="p">),</span> <span class="mi">1</span><span class="p">,</span> <span class="mi">8</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC93'>							<span class="n">cv</span><span class="o">::</span><span class="n">putText</span><span class="p">(</span><span class="n">frameOriginal</span><span class="p">,</span> <span class="s">&quot;Forehead&quot;</span><span class="p">,</span> <span class="n">cv</span><span class="o">::</span><span class="n">Point</span><span class="p">(</span><span class="n">fh</span><span class="p">.</span><span class="n">x</span><span class="p">,</span> <span class="n">fh</span><span class="p">.</span><span class="n">y</span><span class="p">),</span> <span class="n">CV_FONT_HERSHEY_PLAIN</span><span class="p">,</span> <span class="mf">1.2</span><span class="p">,</span> <span class="n">color</span><span class="p">);</span></div><div class='line' id='LC94'>							<span class="n">cv</span><span class="o">::</span><span class="n">putText</span><span class="p">(</span><span class="n">frameOriginal</span><span class="p">,</span> <span class="s">&quot;Press &#39;S&#39; to begin BPM monitoring&quot;</span><span class="p">,</span> <span class="n">cv</span><span class="o">::</span><span class="n">Point</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">40</span><span class="p">),</span> <span class="n">CV_FONT_HERSHEY_PLAIN</span><span class="p">,</span> <span class="mf">1.2</span><span class="p">,</span> <span class="n">color</span><span class="p">);</span></div><div class='line' id='LC95'>						<span class="p">}</span></div><div class='line' id='LC96'>						<span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC97'>							<span class="c1">// Get image data for the forehead for BPM monitoring</span></div><div class='line' id='LC98'>							<span class="n">cv</span><span class="o">::</span><span class="n">Mat</span> <span class="n">fhimg</span> <span class="o">=</span> <span class="n">frameOriginal</span><span class="p">(</span><span class="n">_forehead</span><span class="p">);</span></div><div class='line' id='LC99'>							<span class="n">cv</span><span class="o">::</span><span class="n">rectangle</span><span class="p">(</span><span class="n">frameOriginal</span><span class="p">,</span> <span class="n">_forehead</span><span class="p">,</span> <span class="n">cv</span><span class="o">::</span><span class="n">Scalar</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">0</span><span class="p">),</span> <span class="mi">1</span><span class="p">,</span> <span class="mi">8</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC100'>							<span class="c1">//cv::putText(frameOriginal, &quot;BMP Area&quot;, cv::Point(_forehead.x, _forehead.y), CV_FONT_HERSHEY_PLAIN, 1.2, color);</span></div><div class='line' id='LC101'>							<span class="n">cv</span><span class="o">::</span><span class="n">putText</span><span class="p">(</span><span class="n">frameOriginal</span><span class="p">,</span> <span class="s">&quot;Press &#39;R&#39; to stop BPM monitoring&quot;</span><span class="p">,</span> <span class="n">cv</span><span class="o">::</span><span class="n">Point</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">40</span><span class="p">),</span> <span class="n">CV_FONT_HERSHEY_PLAIN</span><span class="p">,</span> <span class="mf">1.2</span><span class="p">,</span> <span class="n">color</span><span class="p">);</span></div><div class='line' id='LC102'>							<span class="n">gap</span> <span class="o">=</span> <span class="p">(</span><span class="n">MAX_SAMPLES</span> <span class="o">-</span> <span class="p">(</span><span class="n">_means</span><span class="p">.</span><span class="n">size</span><span class="p">())</span> <span class="p">)</span> <span class="o">/</span> <span class="n">_fps</span><span class="p">;</span></div><div class='line' id='LC103'>							<span class="k">if</span><span class="p">(</span> <span class="n">gap</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">){</span></div><div class='line' id='LC104'>								<span class="kt">char</span> <span class="n">buffer</span><span class="p">[</span><span class="mi">50</span><span class="p">];</span></div><div class='line' id='LC105'><br/></div><div class='line' id='LC106'>								<span class="kt">int</span> <span class="n">n</span> <span class="o">=</span> <span class="n">snprintf</span><span class="p">(</span><span class="n">buffer</span><span class="p">,</span> <span class="mi">50</span><span class="p">,</span> <span class="s">&quot;Please wait for %0.0lf s&quot;</span><span class="p">,</span> <span class="n">gap</span><span class="p">);</span></div><div class='line' id='LC107'>								<span class="n">cv</span><span class="o">::</span><span class="n">putText</span><span class="p">(</span><span class="n">frameOriginal</span><span class="p">,</span> <span class="n">buffer</span><span class="p">,</span> <span class="n">cv</span><span class="o">::</span><span class="n">Point</span><span class="p">(</span><span class="n">_forehead</span><span class="p">.</span><span class="n">x</span> <span class="o">+</span> <span class="mi">100</span><span class="p">,</span> <span class="n">_forehead</span><span class="p">.</span><span class="n">y</span><span class="o">+</span> <span class="mi">25</span><span class="p">),</span> <span class="n">CV_FONT_HERSHEY_PLAIN</span><span class="p">,</span> <span class="mf">1.2</span><span class="p">,</span> <span class="n">color</span><span class="p">);</span></div><div class='line' id='LC108'>							<span class="p">}</span></div><div class='line' id='LC109'><br/></div><div class='line' id='LC110'>							<span class="n">pdata</span> <span class="o">=</span> <span class="n">estimateBPM</span><span class="p">(</span><span class="n">fhimg</span><span class="p">);</span></div><div class='line' id='LC111'>							<span class="kt">char</span> <span class="n">bpmbuffer</span><span class="p">[</span><span class="mi">50</span><span class="p">];</span></div><div class='line' id='LC112'>							<span class="kt">int</span> <span class="n">n</span> <span class="o">=</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">bpmbuffer</span><span class="p">,</span> <span class="s">&quot;estimate: %0.1lf bpm&quot;</span><span class="p">,</span> <span class="p">(</span><span class="n">pdata</span><span class="p">.</span><span class="n">bpm</span><span class="p">));</span></div><div class='line' id='LC113'>							<span class="n">cv</span><span class="o">::</span><span class="n">putText</span><span class="p">(</span><span class="n">frameOriginal</span><span class="p">,</span> <span class="n">bpmbuffer</span><span class="p">,</span> <span class="n">cv</span><span class="o">::</span><span class="n">Point</span><span class="p">(</span><span class="n">_forehead</span><span class="p">.</span><span class="n">x</span> <span class="p">,</span> <span class="n">_forehead</span><span class="p">.</span><span class="n">y</span><span class="p">),</span> <span class="n">CV_FONT_HERSHEY_PLAIN</span><span class="p">,</span> <span class="mf">1.2</span><span class="p">,</span> <span class="n">color</span><span class="p">);</span></div><div class='line' id='LC114'><br/></div><div class='line' id='LC115'>						<span class="p">}</span></div><div class='line' id='LC116'><br/></div><div class='line' id='LC117'>					<span class="c1">// Save face area. Get the face from gray scale frame and then convert</span></div><div class='line' id='LC118'>					<span class="c1">// it to BGR color space so it can be drawn on the graph canvas</span></div><div class='line' id='LC119'>					<span class="n">cv</span><span class="o">::</span><span class="n">resize</span><span class="p">(</span><span class="n">frameGreyscale</span><span class="p">(</span><span class="n">faces</span><span class="p">[</span><span class="mi">0</span><span class="p">]),</span> <span class="n">_face</span><span class="p">,</span> <span class="n">cv</span><span class="o">::</span><span class="n">Size</span><span class="p">(</span><span class="mi">100</span><span class="p">,</span><span class="mi">100</span><span class="p">),</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">CV_INTER_LINEAR</span><span class="p">);</span></div><div class='line' id='LC120'>					<span class="n">cv</span><span class="o">::</span><span class="n">cvtColor</span><span class="p">(</span><span class="n">_face</span><span class="p">,</span> <span class="n">_face</span><span class="p">,</span> <span class="n">CV_GRAY2BGR</span><span class="p">);</span></div><div class='line' id='LC121'>					<span class="c1">// Different parameters - sensitive to lighting conditions</span></div><div class='line' id='LC122'>					<span class="c1">//_face.convertTo(_face,-1, 1.0,25.0);</span></div><div class='line' id='LC123'>					<span class="n">_face</span><span class="p">.</span><span class="n">convertTo</span><span class="p">(</span><span class="n">_face</span><span class="p">,</span><span class="o">-</span><span class="mi">1</span><span class="p">,</span> <span class="mf">1.0</span><span class="p">,</span><span class="mf">40.0</span><span class="p">);</span></div><div class='line' id='LC124'>					<span class="p">}</span></div><div class='line' id='LC125'><br/></div><div class='line' id='LC126'>			<span class="p">}</span></div><div class='line' id='LC127'>			<span class="c1">// Show video image + annotations on window</span></div><div class='line' id='LC128'>			<span class="n">cv</span><span class="o">::</span><span class="n">putText</span><span class="p">(</span><span class="n">frameOriginal</span><span class="p">,</span> <span class="s">&quot;Press &#39;Esc&#39; to quit&quot;</span><span class="p">,</span> <span class="n">cv</span><span class="o">::</span><span class="n">Point</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="mi">20</span><span class="p">),</span> <span class="n">CV_FONT_HERSHEY_PLAIN</span><span class="p">,</span> <span class="mf">1.2</span><span class="p">,</span> <span class="n">color</span><span class="p">);</span></div><div class='line' id='LC129'>			<span class="n">cv</span><span class="o">::</span><span class="n">imshow</span><span class="p">(</span><span class="n">windowName</span><span class="p">,</span> <span class="n">frameOriginal</span><span class="p">);</span></div><div class='line' id='LC130'><br/></div><div class='line' id='LC131'>			<span class="c1">// Plot graphs</span></div><div class='line' id='LC132'>			<span class="k">if</span> <span class="p">(</span><span class="n">_means</span><span class="p">.</span><span class="n">size</span><span class="p">()</span> <span class="o">&gt;=</span> <span class="mi">2</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC133'>				<span class="n">graph</span> <span class="o">=</span> <span class="n">cv</span><span class="o">::</span><span class="n">Mat</span><span class="o">::</span><span class="n">zeros</span><span class="p">(</span><span class="n">BPM_GRAPH_HEIGHT</span><span class="p">,</span> <span class="n">BPM_GRAPH_WIDTH</span><span class="p">,</span> <span class="n">CV_8UC3</span><span class="p">);</span></div><div class='line' id='LC134'>				<span class="kt">int</span> <span class="n">gapFactor</span><span class="p">;</span></div><div class='line' id='LC135'><br/></div><div class='line' id='LC136'>				<span class="kt">double</span> <span class="n">gap</span> <span class="o">=</span> <span class="n">BPM_TRACE_SIZE</span> <span class="o">/</span> <span class="p">(</span><span class="n">MAX_SAMPLES</span><span class="p">);</span></div><div class='line' id='LC137'>				<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC138'>				<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">_means</span><span class="p">.</span><span class="n">size</span><span class="p">()</span> <span class="o">-</span> <span class="mi">1</span><span class="p">;</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC139'>					<span class="n">cv</span><span class="o">::</span><span class="n">Point</span> <span class="n">p1</span><span class="p">((</span><span class="kt">int</span><span class="p">)</span> <span class="n">x</span><span class="p">,</span> <span class="p">(</span><span class="kt">int</span><span class="p">)</span> <span class="n">_means</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">+</span> <span class="mi">150</span><span class="p">);</span></div><div class='line' id='LC140'>					<span class="n">cv</span><span class="o">::</span><span class="n">Point</span> <span class="n">p2</span><span class="p">((</span><span class="kt">int</span><span class="p">)</span> <span class="p">(</span><span class="n">x</span><span class="o">+</span><span class="n">gap</span><span class="p">),</span> <span class="p">(</span><span class="kt">int</span><span class="p">)</span> <span class="n">_means</span><span class="p">[</span><span class="n">i</span><span class="o">+</span><span class="mi">1</span><span class="p">]</span><span class="o">+</span> <span class="mi">150</span><span class="p">);</span></div><div class='line' id='LC141'>					<span class="n">cv</span><span class="o">::</span><span class="n">line</span><span class="p">(</span><span class="n">graph</span><span class="p">,</span> <span class="n">p1</span><span class="p">,</span> <span class="n">p2</span><span class="p">,</span> <span class="n">cv</span><span class="o">::</span><span class="n">Scalar</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">));</span></div><div class='line' id='LC142'>					<span class="n">x</span> <span class="o">=</span> <span class="n">x</span> <span class="o">+</span> <span class="n">gap</span><span class="p">;</span></div><div class='line' id='LC143'>				<span class="p">}</span></div><div class='line' id='LC144'>			<span class="k">if</span> <span class="p">(</span><span class="n">_fftabs</span><span class="p">.</span><span class="n">size</span><span class="p">()</span> <span class="o">&gt;=</span> <span class="mi">2</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC145'>				<span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">xvals</span> <span class="o">=</span> <span class="n">linspace</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="n">BPM_GRAPH_WIDTH</span> <span class="o">-</span> <span class="mi">1</span><span class="p">,</span> <span class="n">_fftabs</span><span class="p">.</span><span class="n">size</span><span class="p">());</span></div><div class='line' id='LC146'>				<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">_fftabs</span><span class="p">.</span><span class="n">size</span><span class="p">()</span> <span class="o">-</span><span class="mi">1</span> <span class="p">;</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC147'>					<span class="n">cv</span><span class="o">::</span><span class="n">Point</span> <span class="n">p1</span><span class="p">((</span><span class="kt">int</span><span class="p">)</span> <span class="n">xvals</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="n">BPM_GRAPH_HEIGHT</span> <span class="o">-</span> <span class="p">(</span><span class="kt">int</span><span class="p">)</span> <span class="n">_fftabs</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">*</span> <span class="mi">4</span> <span class="o">-</span> <span class="mi">200</span><span class="p">);</span></div><div class='line' id='LC148'>					<span class="n">cv</span><span class="o">::</span><span class="n">Point</span> <span class="n">p2</span> <span class="p">((</span><span class="kt">int</span><span class="p">)</span> <span class="n">xvals</span><span class="p">[</span><span class="n">i</span><span class="o">+</span><span class="mi">1</span><span class="p">],</span> <span class="n">BPM_GRAPH_HEIGHT</span> <span class="o">-</span> <span class="p">(</span><span class="kt">int</span><span class="p">)</span> <span class="n">_fftabs</span><span class="p">[</span><span class="n">i</span><span class="o">+</span><span class="mi">1</span><span class="p">]</span> <span class="o">*</span> <span class="mi">4</span> <span class="o">-</span> <span class="mi">200</span><span class="p">);</span></div><div class='line' id='LC149'>					<span class="n">cv</span><span class="o">::</span><span class="n">line</span><span class="p">(</span><span class="n">graph</span><span class="p">,</span> <span class="n">p1</span><span class="p">,</span> <span class="n">p2</span><span class="p">,</span> <span class="n">cv</span><span class="o">::</span><span class="n">Scalar</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span><span class="mi">255</span><span class="p">,</span><span class="mi">255</span><span class="p">,</span><span class="mi">0</span><span class="p">));</span></div><div class='line' id='LC150'>				<span class="p">}</span></div><div class='line' id='LC151'>			<span class="p">}</span></div><div class='line' id='LC152'>			<span class="k">if</span><span class="p">(</span><span class="n">_bpms</span><span class="p">.</span><span class="n">size</span><span class="p">()</span> <span class="o">&gt;=</span><span class="mi">2</span><span class="p">){</span></div><div class='line' id='LC153'>				<span class="c1">// Canvas already cleared in _means if statement</span></div><div class='line' id='LC154'>				<span class="kt">double</span> <span class="n">gapFactor</span> <span class="o">=</span> <span class="n">BPM_TRACE_SIZE</span> <span class="o">/</span> <span class="p">(</span><span class="n">MAX_SAMPLES</span><span class="p">);</span></div><div class='line' id='LC155'>				<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span><span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC156'>				<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">_bpms</span><span class="p">.</span><span class="n">size</span><span class="p">()</span> <span class="o">-</span> <span class="mi">1</span><span class="p">;</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC157'>					<span class="n">cv</span><span class="o">::</span><span class="n">Point</span> <span class="n">p1</span><span class="p">((</span><span class="kt">int</span><span class="p">)</span> <span class="n">x</span><span class="p">,</span> <span class="p">(</span><span class="kt">int</span><span class="p">)</span> <span class="n">_bpms</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">+</span> <span class="mi">275</span><span class="p">);</span></div><div class='line' id='LC158'>					<span class="n">cv</span><span class="o">::</span><span class="n">Point</span> <span class="n">p2</span><span class="p">((</span><span class="kt">int</span><span class="p">)</span> <span class="p">(</span><span class="n">x</span><span class="o">+</span><span class="n">gapFactor</span><span class="p">),</span> <span class="p">(</span><span class="kt">int</span><span class="p">)</span> <span class="n">_bpms</span><span class="p">[</span><span class="n">i</span><span class="o">+</span><span class="mi">1</span><span class="p">]</span> <span class="o">+</span> <span class="mi">275</span><span class="p">);</span></div><div class='line' id='LC159'>					<span class="n">cv</span><span class="o">::</span><span class="n">line</span><span class="p">(</span><span class="n">graph</span><span class="p">,</span> <span class="n">p1</span><span class="p">,</span> <span class="n">p2</span><span class="p">,</span> <span class="n">cv</span><span class="o">::</span><span class="n">Scalar</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span><span class="mi">255</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">));</span></div><div class='line' id='LC160'>					<span class="n">x</span> <span class="o">=</span> <span class="n">x</span> <span class="o">+</span> <span class="n">gapFactor</span><span class="p">;</span></div><div class='line' id='LC161'>				<span class="p">}</span></div><div class='line' id='LC162'><br/></div><div class='line' id='LC163'>			<span class="p">}</span></div><div class='line' id='LC164'><br/></div><div class='line' id='LC165'>			<span class="c1">// Draw face on graph canvas</span></div><div class='line' id='LC166'>			<span class="n">_face</span><span class="p">.</span><span class="n">copyTo</span><span class="p">(</span><span class="n">graph</span><span class="p">(</span><span class="n">cv</span><span class="o">::</span><span class="n">Rect</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">_face</span><span class="p">.</span><span class="n">cols</span><span class="p">,</span> <span class="n">_face</span><span class="p">.</span><span class="n">rows</span><span class="p">)));</span></div><div class='line' id='LC167'>			<span class="n">cv</span><span class="o">::</span><span class="n">imshow</span><span class="p">(</span><span class="n">windowGraph</span><span class="p">,</span> <span class="n">graph</span><span class="p">);</span></div><div class='line' id='LC168'>			<span class="p">}</span></div><div class='line' id='LC169'>		<span class="p">}</span></div><div class='line' id='LC170'>		<span class="c1">// Pause for 50m and read key, if any</span></div><div class='line' id='LC171'>		<span class="k">switch</span> <span class="p">(</span><span class="n">tolower</span><span class="p">(</span><span class="n">cv</span><span class="o">::</span><span class="n">waitKey</span><span class="p">(</span><span class="mi">40</span><span class="p">)))</span> <span class="p">{</span></div><div class='line' id='LC172'>			<span class="k">case</span> <span class="n">KEY_ESCAPE</span>:</div><div class='line' id='LC173'>				<span class="n">processing</span> <span class="o">=</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC174'>				<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC175'>			<span class="k">case</span> <span class="n">KEY_S</span>:</div><div class='line' id='LC176'>				<span class="k">if</span><span class="p">(</span><span class="n">_forehead</span><span class="p">.</span><span class="n">area</span><span class="p">()</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC177'>					<span class="n">monitoring</span> <span class="o">=</span> <span class="nb">true</span><span class="p">;</span></div><div class='line' id='LC178'>				<span class="p">}</span></div><div class='line' id='LC179'>				<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC180'>			<span class="k">case</span> <span class="n">KEY_R</span>:</div><div class='line' id='LC181'>				<span class="n">monitoring</span> <span class="o">=</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC182'>				<span class="n">clearBuffers</span><span class="p">();</span></div><div class='line' id='LC183'>				<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC184'>			<span class="p">}</span></div><div class='line' id='LC185'>		<span class="p">}</span></div><div class='line' id='LC186'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC187'><span class="p">}</span></div><div class='line' id='LC188'><br/></div><div class='line' id='LC189'><span class="kt">void</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">getForehead</span><span class="p">(</span><span class="k">const</span> <span class="n">cv</span><span class="o">::</span><span class="n">Rect</span><span class="o">&amp;</span> <span class="n">face</span><span class="p">,</span> <span class="n">cv</span><span class="o">::</span><span class="n">Rect</span><span class="o">&amp;</span> <span class="n">forehead</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC190'>	<span class="n">getSubface</span><span class="p">(</span><span class="n">face</span><span class="p">,</span> <span class="n">forehead</span><span class="p">,</span> <span class="mf">0.50</span><span class="p">,</span> <span class="mf">0.18</span><span class="p">,</span> <span class="mf">0.25</span><span class="p">,</span> <span class="mf">0.15</span><span class="p">);</span></div><div class='line' id='LC191'>	<span class="c1">//getSubface(face, forehead, 0.50, 0.13, (0.45), 0.20);</span></div><div class='line' id='LC192'>	<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC193'><span class="p">}</span></div><div class='line' id='LC194'><br/></div><div class='line' id='LC195'><span class="kt">void</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">getSubface</span><span class="p">(</span><span class="k">const</span> <span class="n">cv</span><span class="o">::</span><span class="n">Rect</span><span class="o">&amp;</span> <span class="n">face</span><span class="p">,</span> <span class="n">cv</span><span class="o">::</span><span class="n">Rect</span><span class="o">&amp;</span> <span class="n">sub</span><span class="p">,</span> <span class="kt">float</span> <span class="n">sf_x</span><span class="p">,</span> <span class="kt">float</span> <span class="n">sf_y</span><span class="p">,</span> <span class="kt">float</span> <span class="n">sf_w</span><span class="p">,</span> <span class="kt">float</span> <span class="n">sf_h</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC196'>	<span class="n">assert</span> <span class="p">(</span><span class="n">face</span><span class="p">.</span><span class="n">height</span> <span class="o">!=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">face</span><span class="p">.</span><span class="n">width</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC197'>	<span class="n">assert</span> <span class="p">(</span><span class="n">sf_w</span> <span class="o">&gt;</span> <span class="mf">0.0</span> <span class="o">&amp;&amp;</span> <span class="n">sf_y</span> <span class="o">&gt;</span> <span class="mf">0.0</span> <span class="o">&amp;&amp;</span> <span class="n">sf_w</span> <span class="o">&gt;</span> <span class="mf">0.0</span> <span class="o">&amp;&amp;</span> <span class="n">sf_h</span> <span class="o">&gt;</span> <span class="mf">0.0</span><span class="p">);</span></div><div class='line' id='LC198'>	<span class="n">sub</span><span class="p">.</span><span class="n">x</span> <span class="o">=</span> <span class="n">face</span><span class="p">.</span><span class="n">x</span> <span class="o">+</span> <span class="n">face</span><span class="p">.</span><span class="n">width</span> <span class="o">*</span> <span class="n">sf_x</span> <span class="o">-</span> <span class="p">(</span><span class="n">face</span><span class="p">.</span><span class="n">width</span> <span class="o">*</span> <span class="n">sf_w</span> <span class="o">/</span> <span class="mf">2.0</span><span class="p">);</span></div><div class='line' id='LC199'>	<span class="n">sub</span><span class="p">.</span><span class="n">y</span> <span class="o">=</span> <span class="n">face</span><span class="p">.</span><span class="n">y</span> <span class="o">+</span> <span class="n">face</span><span class="p">.</span><span class="n">height</span> <span class="o">*</span> <span class="n">sf_y</span> <span class="o">-</span> <span class="p">(</span><span class="n">face</span><span class="p">.</span><span class="n">height</span> <span class="o">*</span> <span class="n">sf_h</span> <span class="o">/</span> <span class="mf">2.0</span><span class="p">);</span></div><div class='line' id='LC200'>	<span class="n">sub</span><span class="p">.</span><span class="n">width</span> <span class="o">=</span> <span class="n">face</span><span class="p">.</span><span class="n">width</span> <span class="o">*</span> <span class="n">sf_w</span><span class="p">;</span></div><div class='line' id='LC201'>	<span class="n">sub</span><span class="p">.</span><span class="n">height</span> <span class="o">=</span> <span class="n">face</span><span class="p">.</span><span class="n">height</span> <span class="o">*</span> <span class="n">sf_h</span><span class="p">;</span></div><div class='line' id='LC202'>	<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC203'><span class="p">}</span></div><div class='line' id='LC204'><span class="c1">//</span></div><div class='line' id='LC205'><span class="c1">// Mathematical processing - Done without separating</span></div><div class='line' id='LC206'><span class="c1">// the frames as opposed to the original implementation</span></div><div class='line' id='LC207'><span class="c1">//</span></div><div class='line' id='LC208'><span class="kt">double</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">calculate_mean</span><span class="p">(</span><span class="k">const</span> <span class="n">cv</span><span class="o">::</span><span class="n">Mat</span><span class="o">&amp;</span> <span class="n">image</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC209'>	<span class="n">cv</span><span class="o">::</span><span class="n">Scalar</span> <span class="n">means</span> <span class="o">=</span> <span class="n">cv</span><span class="o">::</span><span class="n">mean</span><span class="p">(</span><span class="n">image</span><span class="p">);</span></div><div class='line' id='LC210'>	<span class="k">return</span> <span class="p">(</span><span class="n">means</span><span class="p">.</span><span class="n">val</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">+</span> <span class="n">means</span><span class="p">.</span><span class="n">val</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="o">+</span> <span class="n">means</span><span class="p">.</span><span class="n">val</span><span class="p">[</span><span class="mi">2</span><span class="p">])</span> <span class="o">/</span> <span class="mi">3</span><span class="p">;</span></div><div class='line' id='LC211'><span class="p">}</span></div><div class='line' id='LC212'><span class="c1">//</span></div><div class='line' id='LC213'><span class="c1">// Main processing function</span></div><div class='line' id='LC214'><span class="c1">//</span></div><div class='line' id='LC215'><span class="n">PU</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">estimateBPM</span><span class="p">(</span><span class="k">const</span> <span class="n">cv</span><span class="o">::</span><span class="n">Mat</span><span class="o">&amp;</span> <span class="n">skin</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC216'>	<span class="n">_means</span><span class="p">.</span><span class="n">push_back</span><span class="p">(</span><span class="n">calculate_mean</span><span class="p">(</span><span class="n">skin</span><span class="p">));</span></div><div class='line' id='LC217'>	<span class="n">_times</span><span class="p">.</span><span class="n">push_back</span><span class="p">(</span><span class="n">timestamp</span><span class="p">());</span></div><div class='line' id='LC218'><br/></div><div class='line' id='LC219'><br/></div><div class='line' id='LC220'>	<span class="n">PU</span> <span class="n">pdata</span><span class="p">;</span></div><div class='line' id='LC221'>	<span class="kt">int</span> <span class="n">sampleSize</span> <span class="o">=</span> <span class="n">_means</span><span class="p">.</span><span class="n">size</span><span class="p">();</span></div><div class='line' id='LC222'>	<span class="c1">// Check Point</span></div><div class='line' id='LC223'>	<span class="n">assert</span> <span class="p">(</span><span class="n">_times</span><span class="p">.</span><span class="n">size</span><span class="p">()</span> <span class="o">==</span> <span class="n">sampleSize</span><span class="p">);</span></div><div class='line' id='LC224'><br/></div><div class='line' id='LC225'>	<span class="c1">// If there are no efficient samples, dont proceed</span></div><div class='line' id='LC226'>	<span class="k">if</span> <span class="p">(</span><span class="n">sampleSize</span> <span class="o">&lt;=</span> <span class="n">MIN_SAMPLES</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC227'>		<span class="k">return</span> <span class="n">pdata</span><span class="p">;</span></div><div class='line' id='LC228'>	<span class="p">}</span></div><div class='line' id='LC229'>	<span class="c1">// If there are more samples than required, trim oldest</span></div><div class='line' id='LC230'>	<span class="k">if</span> <span class="p">(</span><span class="n">sampleSize</span> <span class="o">&gt;</span> <span class="n">MAX_SAMPLES</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC231'>		<span class="n">list_trimfront</span><span class="p">(</span><span class="n">_means</span><span class="p">,</span> <span class="n">MAX_SAMPLES</span><span class="p">);</span></div><div class='line' id='LC232'>		<span class="n">list_trimfront</span><span class="p">(</span><span class="n">_times</span><span class="p">,</span> <span class="n">MAX_SAMPLES</span><span class="p">);</span></div><div class='line' id='LC233'>		<span class="n">list_trimfront</span><span class="p">(</span><span class="n">_bpms</span><span class="p">,</span> <span class="n">MAX_SAMPLES</span><span class="p">);</span></div><div class='line' id='LC234'>		<span class="n">sampleSize</span> <span class="o">=</span> <span class="n">MAX_SAMPLES</span><span class="p">;</span></div><div class='line' id='LC235'>	<span class="p">}</span></div><div class='line' id='LC236'>	<span class="c1">// FPS</span></div><div class='line' id='LC237'>	<span class="n">_fps</span> <span class="o">=</span> <span class="n">sampleSize</span> <span class="o">/</span> <span class="p">(</span><span class="n">_times</span><span class="p">.</span><span class="n">back</span><span class="p">()</span> <span class="o">-</span> <span class="n">_times</span><span class="p">.</span><span class="n">front</span><span class="p">());</span></div><div class='line' id='LC238'>	<span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">even_times</span> <span class="o">=</span> <span class="n">linspace</span><span class="p">(</span><span class="n">_times</span><span class="p">.</span><span class="n">front</span><span class="p">(),</span> <span class="n">_times</span><span class="p">.</span><span class="n">back</span><span class="p">(),</span> <span class="n">sampleSize</span><span class="p">);</span> </div><div class='line' id='LC239'>	<span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">interpolated</span> <span class="o">=</span> <span class="n">interp</span><span class="p">(</span><span class="n">even_times</span><span class="p">,</span> <span class="n">_times</span><span class="p">,</span> <span class="n">_means</span><span class="p">);</span></div><div class='line' id='LC240'><br/></div><div class='line' id='LC241'>	<span class="c1">//dump(&quot;interpolated&quot; , interpolated);</span></div><div class='line' id='LC242'><br/></div><div class='line' id='LC243'>	<span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">hamming</span> <span class="o">=</span> <span class="n">hammingWindow</span><span class="p">(</span><span class="n">sampleSize</span><span class="p">);</span></div><div class='line' id='LC244'><br/></div><div class='line' id='LC245'>	<span class="n">list_multiply_vector</span><span class="p">(</span><span class="n">interpolated</span><span class="p">,</span> <span class="n">hamming</span><span class="p">);</span></div><div class='line' id='LC246'><br/></div><div class='line' id='LC247'>	<span class="kt">double</span> <span class="n">totalMean</span> <span class="o">=</span> <span class="n">list_mean</span><span class="p">(</span><span class="n">interpolated</span><span class="p">);</span></div><div class='line' id='LC248'>	<span class="n">list_subtract</span><span class="p">(</span><span class="n">interpolated</span><span class="p">,</span> <span class="n">totalMean</span><span class="p">);</span></div><div class='line' id='LC249'><br/></div><div class='line' id='LC250'>	<span class="c1">// One dimensional Discrete FFT</span></div><div class='line' id='LC251'>	<span class="n">vector</span><span class="o">&lt;</span><span class="n">gsl_complex</span><span class="o">&gt;</span> <span class="n">fftraw</span> <span class="o">=</span> <span class="n">fft_transform</span><span class="p">(</span><span class="n">interpolated</span><span class="p">);</span></div><div class='line' id='LC252'>	<span class="c1">//dump_complex(fftraw);</span></div><div class='line' id='LC253'><br/></div><div class='line' id='LC254'>	<span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">angles</span> <span class="o">=</span> <span class="n">calculate_complex_angle</span><span class="p">(</span><span class="n">fftraw</span><span class="p">);</span></div><div class='line' id='LC255'>	<span class="c1">//dump(&quot;angles&quot; , angles);</span></div><div class='line' id='LC256'><br/></div><div class='line' id='LC257'>	<span class="c1">// Get absolute values of FFT coefficients</span></div><div class='line' id='LC258'>	<span class="n">_fftabs</span> <span class="o">=</span> <span class="n">calculate_complex_abs</span><span class="p">(</span><span class="n">fftraw</span><span class="p">);</span></div><div class='line' id='LC259'><br/></div><div class='line' id='LC260'>	<span class="c1">// Frequencies using spaced values within interval 0 - L/2+1</span></div><div class='line' id='LC261'>	<span class="n">_frequencies</span> <span class="o">=</span> <span class="n">arange</span><span class="p">((</span><span class="n">sampleSize</span> <span class="o">/</span> <span class="mi">2</span><span class="p">)</span> <span class="o">+</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC262'>	<span class="n">list_multiply</span><span class="p">(</span><span class="n">_frequencies</span><span class="p">,</span> <span class="n">_fps</span> <span class="o">/</span> <span class="n">sampleSize</span><span class="p">);</span></div><div class='line' id='LC263'><br/></div><div class='line' id='LC264'>	<span class="c1">// Get indices of frequences that are less than 50 and greater than 150</span></div><div class='line' id='LC265'>	<span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">freqs</span><span class="p">(</span><span class="n">_frequencies</span><span class="p">);</span></div><div class='line' id='LC266'>	<span class="n">list_multiply</span><span class="p">(</span><span class="n">freqs</span><span class="p">,</span> <span class="mf">60.0</span><span class="p">);</span></div><div class='line' id='LC267'>	<span class="c1">// Filter out frequencies less than 50 and greater than 180</span></div><div class='line' id='LC268'>	<span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">fitered_indices</span> <span class="o">=</span> <span class="n">list_filter</span><span class="p">(</span><span class="n">freqs</span><span class="p">,</span> <span class="n">BPM_FILTER_LOW</span><span class="p">,</span> <span class="n">BPM_FILTER_HIGH</span><span class="p">);</span></div><div class='line' id='LC269'><br/></div><div class='line' id='LC270'><br/></div><div class='line' id='LC271'>	<span class="c1">// Used filtered indices to get corresponding fft values, angles, and frequencies</span></div><div class='line' id='LC272'>	<span class="n">_fftabs</span> <span class="o">=</span> <span class="n">list_pruned</span><span class="p">(</span><span class="n">_fftabs</span><span class="p">,</span> <span class="n">fitered_indices</span><span class="p">);</span></div><div class='line' id='LC273'><span class="c1">//	dump(&quot;Pruned FFT abs: &quot;, _fftabs);</span></div><div class='line' id='LC274'>	<span class="n">freqs</span> <span class="o">=</span> <span class="n">list_pruned</span><span class="p">(</span><span class="n">freqs</span><span class="p">,</span> <span class="n">fitered_indices</span><span class="p">);</span></div><div class='line' id='LC275'><span class="c1">//	dump(&quot;Pruned frequencies : &quot;, freqs);</span></div><div class='line' id='LC276'>	<span class="n">angles</span> <span class="o">=</span> <span class="n">list_pruned</span><span class="p">(</span><span class="n">angles</span><span class="p">,</span> <span class="n">fitered_indices</span><span class="p">);</span></div><div class='line' id='LC277'>	<span class="c1">//dump(&quot;Pruned angles &quot;, angles);	</span></div><div class='line' id='LC278'><br/></div><div class='line' id='LC279'>	<span class="kt">int</span> <span class="n">max</span> <span class="o">=</span> <span class="n">list_argmax</span><span class="p">(</span><span class="n">_fftabs</span><span class="p">);</span></div><div class='line' id='LC280'><br/></div><div class='line' id='LC281'>	<span class="n">_bpm</span> <span class="o">=</span> <span class="n">freqs</span><span class="p">[</span><span class="n">max</span><span class="p">];</span></div><div class='line' id='LC282'>	<span class="n">_bpms</span><span class="p">.</span><span class="n">push_back</span><span class="p">(</span><span class="n">_bpm</span><span class="p">);</span></div><div class='line' id='LC283'><br/></div><div class='line' id='LC284'>	<span class="n">pdata</span><span class="p">.</span><span class="n">bpm</span> <span class="o">=</span> <span class="n">_bpm</span><span class="p">;</span></div><div class='line' id='LC285'><br/></div><div class='line' id='LC286'>	<span class="k">return</span> <span class="n">pdata</span><span class="p">;</span></div><div class='line' id='LC287'><br/></div><div class='line' id='LC288'><span class="p">}</span></div><div class='line' id='LC289'><br/></div><div class='line' id='LC290'><span class="kt">void</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">clearBuffers</span><span class="p">()</span></div><div class='line' id='LC291'><span class="p">{</span></div><div class='line' id='LC292'><br/></div><div class='line' id='LC293'>	<span class="n">_means</span><span class="p">.</span><span class="n">clear</span><span class="p">();</span></div><div class='line' id='LC294'>	<span class="n">_times</span><span class="p">.</span><span class="n">clear</span><span class="p">();</span></div><div class='line' id='LC295'>	<span class="n">_fftabs</span><span class="p">.</span><span class="n">clear</span><span class="p">();</span></div><div class='line' id='LC296'>	<span class="n">_frequencies</span><span class="p">.</span><span class="n">clear</span><span class="p">();</span></div><div class='line' id='LC297'>	<span class="n">_pruned</span><span class="p">.</span><span class="n">clear</span><span class="p">();</span></div><div class='line' id='LC298'>	<span class="n">_prunedfreq</span><span class="p">.</span><span class="n">clear</span><span class="p">();</span></div><div class='line' id='LC299'>	<span class="n">_bpms</span><span class="p">.</span><span class="n">clear</span><span class="p">();</span></div><div class='line' id='LC300'>	<span class="n">gap</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC301'><br/></div><div class='line' id='LC302'><br/></div><div class='line' id='LC303'><br/></div><div class='line' id='LC304'><span class="p">}</span></div><div class='line' id='LC305'><br/></div><div class='line' id='LC306'><span class="kt">double</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">timestamp</span><span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC307'>	<span class="n">boost</span><span class="o">::</span><span class="n">chrono</span><span class="o">::</span><span class="n">duration</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">seconds</span> <span class="o">=</span> <span class="n">boost</span><span class="o">::</span><span class="n">chrono</span><span class="o">::</span><span class="n">system_clock</span><span class="o">::</span><span class="n">now</span><span class="p">()</span> <span class="o">-</span> <span class="n">_start</span><span class="p">;</span></div><div class='line' id='LC308'>	<span class="k">return</span> <span class="n">seconds</span><span class="p">.</span><span class="n">count</span><span class="p">();</span></div><div class='line' id='LC309'><span class="p">}</span></div><div class='line' id='LC310'><span class="c1">//</span></div><div class='line' id='LC311'><span class="c1">// Return a Hamming window</span></div><div class='line' id='LC312'><span class="c1">//http://docs.scipy.org/doc/numpy/reference/generated/numpy.hamming.html</span></div><div class='line' id='LC313'><span class="c1">//</span></div><div class='line' id='LC314'><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">hammingWindow</span><span class="p">(</span><span class="kt">int</span> <span class="n">M</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC315'>	<span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">window</span><span class="p">(</span><span class="n">M</span><span class="p">);</span></div><div class='line' id='LC316'>	<span class="k">if</span> <span class="p">(</span><span class="n">M</span> <span class="o">==</span> <span class="mi">1</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC317'>		<span class="n">window</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="mf">1.0</span><span class="p">;</span></div><div class='line' id='LC318'>	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC319'>		<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">n</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">n</span> <span class="o">&lt;</span> <span class="n">M</span><span class="p">;</span> <span class="o">++</span><span class="n">n</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC320'>			<span class="n">window</span><span class="p">[</span><span class="n">n</span><span class="p">]</span> <span class="o">=</span> <span class="mf">0.54</span> <span class="o">-</span> <span class="mf">0.46</span> <span class="o">*</span> <span class="n">cos</span><span class="p">((</span><span class="mi">2</span> <span class="o">*</span> <span class="n">M_PI</span> <span class="o">*</span> <span class="n">n</span><span class="p">)</span> <span class="o">/</span> <span class="p">(</span><span class="n">M</span> <span class="o">-</span> <span class="mi">1</span><span class="p">));</span></div><div class='line' id='LC321'>		<span class="p">}</span></div><div class='line' id='LC322'>	<span class="p">}</span></div><div class='line' id='LC323'>	<span class="k">return</span> <span class="n">window</span><span class="p">;</span></div><div class='line' id='LC324'><span class="p">}</span></div><div class='line' id='LC325'><br/></div><div class='line' id='LC326'><span class="c1">//</span></div><div class='line' id='LC327'><span class="c1">// Transform data to FFT  </span></div><div class='line' id='LC328'><span class="c1">//http://www.gnu.org/software/gsl/manual/gsl-ref_16.html</span></div><div class='line' id='LC329'><span class="c1">//</span></div><div class='line' id='LC330'><span class="n">vector</span><span class="o">&lt;</span><span class="n">gsl_complex</span><span class="o">&gt;</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">fft_transform</span><span class="p">(</span><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;&amp;</span> <span class="n">samples</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC331'>	<span class="kt">int</span> <span class="n">size</span> <span class="o">=</span> <span class="n">samples</span><span class="p">.</span><span class="n">size</span><span class="p">();</span></div><div class='line' id='LC332'>	<span class="kt">double</span> <span class="n">data</span><span class="p">[</span><span class="n">size</span><span class="p">];</span></div><div class='line' id='LC333'>	<span class="n">copy</span><span class="p">(</span><span class="n">samples</span><span class="p">.</span><span class="n">begin</span><span class="p">(),</span> <span class="n">samples</span><span class="p">.</span><span class="n">end</span><span class="p">(),</span> <span class="n">data</span><span class="p">);</span></div><div class='line' id='LC334'>	<span class="c1">// Transform to fft</span></div><div class='line' id='LC335'>	<span class="n">gsl_fft_real_workspace</span><span class="o">*</span> <span class="n">work</span> <span class="o">=</span> <span class="n">gsl_fft_real_workspace_alloc</span><span class="p">(</span><span class="n">size</span><span class="p">);</span></div><div class='line' id='LC336'>	<span class="n">gsl_fft_real_wavetable</span><span class="o">*</span> <span class="n">real</span> <span class="o">=</span> <span class="n">gsl_fft_real_wavetable_alloc</span><span class="p">(</span><span class="n">size</span><span class="p">);</span></div><div class='line' id='LC337'>	<span class="n">gsl_fft_real_transform</span><span class="p">(</span><span class="n">data</span><span class="p">,</span> <span class="mi">1</span><span class="p">,</span> <span class="n">size</span><span class="p">,</span> <span class="n">real</span><span class="p">,</span> <span class="n">work</span><span class="p">);</span></div><div class='line' id='LC338'>	<span class="n">gsl_fft_real_wavetable_free</span><span class="p">(</span><span class="n">real</span><span class="p">);</span></div><div class='line' id='LC339'>	<span class="n">gsl_fft_real_workspace_free</span><span class="p">(</span><span class="n">work</span><span class="p">);</span></div><div class='line' id='LC340'>	<span class="c1">// Unpack complex numbers</span></div><div class='line' id='LC341'>	<span class="n">gsl_complex</span> <span class="n">unpacked</span><span class="p">[</span><span class="n">size</span><span class="p">];</span></div><div class='line' id='LC342'>	<span class="n">gsl_fft_halfcomplex_unpack</span><span class="p">(</span><span class="n">data</span><span class="p">,</span> <span class="p">(</span><span class="kt">double</span> <span class="o">*</span><span class="p">)</span> <span class="n">unpacked</span><span class="p">,</span> <span class="mi">1</span><span class="p">,</span> <span class="n">size</span><span class="p">);</span></div><div class='line' id='LC343'>	<span class="c1">// Copy to  a vector</span></div><div class='line' id='LC344'>	<span class="kt">int</span> <span class="n">unpacked_size</span> <span class="o">=</span> <span class="n">size</span> <span class="o">/</span> <span class="mi">2</span> <span class="o">+</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC345'>	<span class="n">vector</span><span class="o">&lt;</span><span class="n">gsl_complex</span><span class="o">&gt;</span> <span class="n">output</span><span class="p">(</span><span class="n">unpacked</span><span class="p">,</span> <span class="n">unpacked</span> <span class="o">+</span> <span class="n">unpacked_size</span><span class="p">);</span></div><div class='line' id='LC346'>	<span class="k">return</span> <span class="n">output</span><span class="p">;</span></div><div class='line' id='LC347'><span class="p">}</span></div><div class='line' id='LC348'><br/></div><div class='line' id='LC349'><span class="c1">//</span></div><div class='line' id='LC350'><span class="c1">// Get angles of raw fft coefficients</span></div><div class='line' id='LC351'><span class="c1">//</span></div><div class='line' id='LC352'><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">calculate_complex_angle</span><span class="p">(</span><span class="n">vector</span><span class="o">&lt;</span><span class="n">gsl_complex</span><span class="o">&gt;</span> <span class="n">cvalues</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC353'>	<span class="c1">// Get angles for a given complex number</span></div><div class='line' id='LC354'>	<span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">output</span><span class="p">(</span><span class="n">cvalues</span><span class="p">.</span><span class="n">size</span><span class="p">());</span></div><div class='line' id='LC355'>	<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span><span class="o">&lt;</span> <span class="n">cvalues</span><span class="p">.</span><span class="n">size</span><span class="p">();</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC356'>		<span class="kt">double</span> <span class="n">angle</span> <span class="o">=</span> <span class="n">atan2</span><span class="p">(</span><span class="n">GSL_IMAG</span><span class="p">(</span><span class="n">cvalues</span><span class="p">[</span><span class="n">i</span><span class="p">]),</span> <span class="n">GSL_REAL</span><span class="p">(</span><span class="n">cvalues</span><span class="p">[</span><span class="n">i</span><span class="p">]));</span></div><div class='line' id='LC357'>		<span class="n">output</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span> <span class="n">angle</span><span class="p">;</span></div><div class='line' id='LC358'>	<span class="p">}</span></div><div class='line' id='LC359'>	<span class="k">return</span> <span class="n">output</span><span class="p">;</span></div><div class='line' id='LC360'><span class="p">}</span></div><div class='line' id='LC361'><br/></div><div class='line' id='LC362'><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">calculate_complex_abs</span><span class="p">(</span><span class="n">vector</span><span class="o">&lt;</span><span class="n">gsl_complex</span><span class="o">&gt;</span> <span class="n">cvalues</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC363'>	<span class="c1">// Calculate absolute value of a given complex number</span></div><div class='line' id='LC364'>	<span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">output</span><span class="p">(</span><span class="n">cvalues</span><span class="p">.</span><span class="n">size</span><span class="p">());</span></div><div class='line' id='LC365'>	<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span><span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">cvalues</span><span class="p">.</span><span class="n">size</span><span class="p">();</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC366'>		<span class="n">output</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span> <span class="n">gsl_complex_abs</span><span class="p">(</span><span class="n">cvalues</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span></div><div class='line' id='LC367'>	<span class="p">}</span></div><div class='line' id='LC368'>	<span class="k">return</span> <span class="n">output</span><span class="p">;</span></div><div class='line' id='LC369'><span class="p">}</span></div><div class='line' id='LC370'><br/></div><div class='line' id='LC371'><span class="c1">//</span></div><div class='line' id='LC372'><span class="c1">// Interpolate function</span></div><div class='line' id='LC373'><span class="c1">//</span></div><div class='line' id='LC374'><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">interp</span><span class="p">(</span><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">interp_x</span><span class="p">,</span> <span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">data_x</span><span class="p">,</span> <span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">data_y</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC375'>	<span class="n">assert</span> <span class="p">(</span><span class="n">data_x</span><span class="p">.</span><span class="n">size</span><span class="p">()</span> <span class="o">==</span> <span class="n">data_y</span><span class="p">.</span><span class="n">size</span><span class="p">());</span></div><div class='line' id='LC376'>	<span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">interp_y</span><span class="p">(</span><span class="n">interp_x</span><span class="p">.</span><span class="n">size</span><span class="p">());</span></div><div class='line' id='LC377'>	<span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">interpRes</span><span class="p">;</span></div><div class='line' id='LC378'><br/></div><div class='line' id='LC379'>	<span class="c1">// GSL function expects an array</span></div><div class='line' id='LC380'>	<span class="kt">double</span> <span class="n">data_y_array</span><span class="p">[</span><span class="n">data_y</span><span class="p">.</span><span class="n">size</span><span class="p">()];</span></div><div class='line' id='LC381'>	<span class="kt">double</span> <span class="n">data_x_array</span><span class="p">[</span><span class="n">data_x</span><span class="p">.</span><span class="n">size</span><span class="p">()];</span></div><div class='line' id='LC382'>	<span class="n">copy</span> <span class="p">(</span><span class="n">data_y</span><span class="p">.</span><span class="n">begin</span><span class="p">(),</span> <span class="n">data_y</span><span class="p">.</span><span class="n">end</span><span class="p">(),</span> <span class="n">data_y_array</span><span class="p">);</span></div><div class='line' id='LC383'>	<span class="n">copy</span> <span class="p">(</span><span class="n">data_x</span><span class="p">.</span><span class="n">begin</span><span class="p">(),</span> <span class="n">data_x</span><span class="p">.</span><span class="n">end</span><span class="p">(),</span> <span class="n">data_x_array</span><span class="p">);</span></div><div class='line' id='LC384'><br/></div><div class='line' id='LC385'>	<span class="kt">double</span> <span class="n">yi</span><span class="p">;</span></div><div class='line' id='LC386'>	<span class="kt">int</span> <span class="n">L</span> <span class="o">=</span> <span class="n">interp_x</span><span class="p">.</span><span class="n">size</span><span class="p">();</span></div><div class='line' id='LC387'><br/></div><div class='line' id='LC388'>	<span class="n">gsl_interp_accel</span> <span class="o">*</span><span class="n">acc</span> <span class="o">=</span> <span class="n">gsl_interp_accel_alloc</span> <span class="p">();</span></div><div class='line' id='LC389'>	<span class="n">gsl_spline</span> <span class="o">*</span><span class="n">spline</span> <span class="o">=</span> <span class="n">gsl_spline_alloc</span> <span class="p">(</span><span class="n">gsl_interp_linear</span><span class="p">,</span> <span class="n">L</span><span class="p">);</span></div><div class='line' id='LC390'>	<span class="n">gsl_spline_init</span> <span class="p">(</span><span class="n">spline</span><span class="p">,</span> <span class="n">data_x_array</span><span class="p">,</span> <span class="n">data_y_array</span><span class="p">,</span> <span class="n">L</span><span class="p">);</span></div><div class='line' id='LC391'><br/></div><div class='line' id='LC392'>	<span class="c1">// BUGFIX: Need to iterate throuh given x-interpolation range</span></div><div class='line' id='LC393'>	<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">xi</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">xi</span> <span class="o">&lt;</span> <span class="n">interp_x</span><span class="p">.</span><span class="n">size</span><span class="p">();</span> <span class="n">xi</span><span class="o">++</span><span class="p">)</span></div><div class='line' id='LC394'>	<span class="p">{</span></div><div class='line' id='LC395'>		<span class="n">yi</span> <span class="o">=</span> <span class="n">gsl_spline_eval</span> <span class="p">(</span><span class="n">spline</span><span class="p">,</span> <span class="n">interp_x</span><span class="p">[</span><span class="n">xi</span><span class="p">],</span> <span class="n">acc</span><span class="p">);</span></div><div class='line' id='LC396'>		<span class="n">interpRes</span><span class="p">.</span><span class="n">push_back</span><span class="p">(</span><span class="n">yi</span><span class="p">);</span></div><div class='line' id='LC397'>		<span class="c1">//printf (&quot;%g\n&quot;, yi);</span></div><div class='line' id='LC398'>	<span class="p">}</span></div><div class='line' id='LC399'><br/></div><div class='line' id='LC400'>	<span class="n">gsl_spline_free</span> <span class="p">(</span><span class="n">spline</span><span class="p">);</span></div><div class='line' id='LC401'>	<span class="n">gsl_interp_accel_free</span> <span class="p">(</span><span class="n">acc</span><span class="p">);</span></div><div class='line' id='LC402'><br/></div><div class='line' id='LC403'>	<span class="k">return</span> <span class="n">interpRes</span><span class="p">;</span></div><div class='line' id='LC404'><span class="p">}</span></div><div class='line' id='LC405'><br/></div><div class='line' id='LC406'><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">arange</span><span class="p">(</span><span class="kt">int</span> <span class="n">stop</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC407'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">range</span><span class="p">(</span><span class="n">stop</span><span class="p">);</span></div><div class='line' id='LC408'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">stop</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC409'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">range</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC410'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC411'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">range</span><span class="p">;</span></div><div class='line' id='LC412'><span class="p">}</span></div><div class='line' id='LC413'><br/></div><div class='line' id='LC414'><span class="c1">//</span></div><div class='line' id='LC415'><span class="c1">// List operations</span></div><div class='line' id='LC416'><span class="c1">//</span></div><div class='line' id='LC417'><br/></div><div class='line' id='LC418'><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">linspace</span><span class="p">(</span><span class="kt">double</span> <span class="n">start</span><span class="p">,</span> <span class="kt">double</span> <span class="n">end</span><span class="p">,</span> <span class="kt">int</span> <span class="n">count</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC419'>	<span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">intervals</span><span class="p">(</span><span class="n">count</span><span class="p">);</span></div><div class='line' id='LC420'>	<span class="kt">double</span> <span class="n">gap</span> <span class="o">=</span> <span class="p">(</span><span class="n">end</span> <span class="o">-</span> <span class="n">start</span><span class="p">)</span> <span class="o">/</span> <span class="p">(</span><span class="n">count</span> <span class="o">-</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC421'>	<span class="n">intervals</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="n">start</span><span class="p">;</span></div><div class='line' id='LC422'>	<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="p">(</span><span class="n">count</span> <span class="o">-</span> <span class="mi">1</span><span class="p">);</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC423'>		<span class="n">intervals</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span> <span class="n">intervals</span><span class="p">[</span><span class="n">i</span><span class="o">-</span><span class="mi">1</span><span class="p">]</span> <span class="o">+</span> <span class="n">gap</span><span class="p">;</span></div><div class='line' id='LC424'>	<span class="p">}</span></div><div class='line' id='LC425'>	<span class="n">intervals</span><span class="p">[</span><span class="n">count</span> <span class="o">-</span> <span class="mi">1</span><span class="p">]</span> <span class="o">=</span> <span class="n">end</span><span class="p">;</span></div><div class='line' id='LC426'>	<span class="k">return</span> <span class="n">intervals</span><span class="p">;</span></div><div class='line' id='LC427'><span class="p">}</span></div><div class='line' id='LC428'><br/></div><div class='line' id='LC429'><span class="kt">double</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">list_mean</span><span class="p">(</span><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;&amp;</span> <span class="n">data</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC430'>	<span class="n">assert</span> <span class="p">(</span><span class="o">!</span><span class="n">data</span><span class="p">.</span><span class="n">empty</span><span class="p">());</span></div><div class='line' id='LC431'>	<span class="n">boost</span><span class="o">::</span><span class="n">accumulators</span><span class="o">::</span><span class="n">accumulator_set</span><span class="o">&lt;</span><span class="kt">double</span><span class="p">,</span> <span class="n">boost</span><span class="o">::</span><span class="n">accumulators</span><span class="o">::</span><span class="n">stats</span><span class="o">&lt;</span><span class="n">boost</span><span class="o">::</span><span class="n">accumulators</span><span class="o">::</span><span class="n">tag</span><span class="o">::</span><span class="n">mean</span><span class="o">&gt;</span> <span class="o">&gt;</span> <span class="n">acc</span><span class="p">;</span></div><div class='line' id='LC432'>	<span class="n">for_each</span><span class="p">(</span><span class="n">data</span><span class="p">.</span><span class="n">begin</span><span class="p">(),</span> <span class="n">data</span><span class="p">.</span><span class="n">end</span><span class="p">(),</span> <span class="n">boost</span><span class="o">::</span><span class="n">bind</span><span class="o">&lt;</span><span class="kt">void</span><span class="o">&gt;</span><span class="p">(</span><span class="n">boost</span><span class="o">::</span><span class="n">ref</span><span class="p">(</span><span class="n">acc</span><span class="p">),</span> <span class="n">_1</span><span class="p">));</span></div><div class='line' id='LC433'>	<span class="k">return</span> <span class="n">boost</span><span class="o">::</span><span class="n">accumulators</span><span class="o">::</span><span class="n">mean</span><span class="p">(</span><span class="n">acc</span><span class="p">);</span></div><div class='line' id='LC434'><span class="p">}</span></div><div class='line' id='LC435'><br/></div><div class='line' id='LC436'><span class="kt">void</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">list_trimfront</span><span class="p">(</span><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;&amp;</span> <span class="n">list</span><span class="p">,</span> <span class="kt">int</span> <span class="n">limit</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC437'>	<span class="kt">int</span> <span class="n">excess</span> <span class="o">=</span> <span class="n">list</span><span class="p">.</span><span class="n">size</span><span class="p">()</span> <span class="o">-</span> <span class="n">limit</span><span class="p">;</span></div><div class='line' id='LC438'>	<span class="k">if</span> <span class="p">(</span><span class="n">excess</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC439'>		<span class="n">list</span><span class="p">.</span><span class="n">erase</span><span class="p">(</span><span class="n">list</span><span class="p">.</span><span class="n">begin</span><span class="p">(),</span> <span class="n">list</span><span class="p">.</span><span class="n">begin</span><span class="p">()</span> <span class="o">+</span> <span class="n">excess</span><span class="p">);</span></div><div class='line' id='LC440'>	<span class="p">}</span></div><div class='line' id='LC441'><span class="p">}</span></div><div class='line' id='LC442'><br/></div><div class='line' id='LC443'><span class="kt">void</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">list_subtract</span><span class="p">(</span><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;&amp;</span> <span class="n">data</span><span class="p">,</span> <span class="kt">double</span> <span class="n">value</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC444'>	<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">data</span><span class="p">.</span><span class="n">size</span><span class="p">();</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC445'>		<span class="n">data</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">-=</span> <span class="n">value</span><span class="p">;</span></div><div class='line' id='LC446'>	<span class="p">}</span></div><div class='line' id='LC447'><span class="p">}</span></div><div class='line' id='LC448'><br/></div><div class='line' id='LC449'><span class="kt">void</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">list_multiply</span><span class="p">(</span><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;&amp;</span> <span class="n">data</span><span class="p">,</span> <span class="kt">double</span> <span class="n">value</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC450'>	<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">data</span><span class="p">.</span><span class="n">size</span><span class="p">();</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC451'>		<span class="n">data</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">*=</span> <span class="n">value</span><span class="p">;</span></div><div class='line' id='LC452'>	<span class="p">}</span></div><div class='line' id='LC453'><span class="p">}</span></div><div class='line' id='LC454'><br/></div><div class='line' id='LC455'><span class="kt">void</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">list_multiply_vector</span><span class="p">(</span><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;&amp;</span> <span class="n">data</span><span class="p">,</span> <span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;&amp;</span> <span class="n">mult</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC456'>	<span class="n">assert</span> <span class="p">(</span><span class="n">data</span><span class="p">.</span><span class="n">size</span><span class="p">()</span> <span class="o">==</span> <span class="n">mult</span><span class="p">.</span><span class="n">size</span><span class="p">());</span></div><div class='line' id='LC457'>	<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">data</span><span class="p">.</span><span class="n">size</span><span class="p">();</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC458'>		<span class="n">data</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">*=</span> <span class="n">mult</span><span class="p">[</span><span class="n">i</span><span class="p">];</span></div><div class='line' id='LC459'>	<span class="p">}</span></div><div class='line' id='LC460'><span class="p">}</span></div><div class='line' id='LC461'><br/></div><div class='line' id='LC462'><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">list_filter</span><span class="p">(</span><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;&amp;</span> <span class="n">data</span><span class="p">,</span> <span class="kt">double</span> <span class="n">low</span><span class="p">,</span> <span class="kt">double</span> <span class="n">high</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC463'>	<span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">indices</span><span class="p">;</span></div><div class='line' id='LC464'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">data</span><span class="p">.</span><span class="n">size</span><span class="p">();</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC465'>&nbsp;&nbsp;&nbsp;&nbsp;	<span class="k">if</span> <span class="p">(</span><span class="n">data</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">&gt;=</span> <span class="n">low</span> <span class="o">&amp;&amp;</span> <span class="n">data</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">&lt;=</span> <span class="n">high</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC466'>&nbsp;&nbsp;&nbsp;&nbsp;		<span class="n">indices</span><span class="p">.</span><span class="n">push_back</span><span class="p">(</span><span class="n">i</span><span class="p">);</span></div><div class='line' id='LC467'>&nbsp;&nbsp;&nbsp;&nbsp;	<span class="p">}</span></div><div class='line' id='LC468'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC469'>	<span class="k">return</span> <span class="n">indices</span><span class="p">;</span></div><div class='line' id='LC470'><span class="p">}</span></div><div class='line' id='LC471'><br/></div><div class='line' id='LC472'><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">list_pruned</span><span class="p">(</span><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;&amp;</span> <span class="n">data</span><span class="p">,</span> <span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;&amp;</span> <span class="n">indices</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC473'>	<span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;</span> <span class="n">pruned</span><span class="p">;</span></div><div class='line' id='LC474'>	<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">indices</span><span class="p">.</span><span class="n">size</span><span class="p">();</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC475'>		<span class="n">assert</span> <span class="p">(</span><span class="n">indices</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">&gt;=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">indices</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">&lt;</span> <span class="n">data</span><span class="p">.</span><span class="n">size</span><span class="p">());</span></div><div class='line' id='LC476'>		<span class="n">pruned</span><span class="p">.</span><span class="n">push_back</span><span class="p">(</span><span class="n">data</span><span class="p">[</span><span class="n">indices</span><span class="p">[</span><span class="n">i</span><span class="p">]]);</span></div><div class='line' id='LC477'>	<span class="p">}</span></div><div class='line' id='LC478'>	<span class="k">return</span> <span class="n">pruned</span><span class="p">;</span></div><div class='line' id='LC479'><span class="p">}</span></div><div class='line' id='LC480'><br/></div><div class='line' id='LC481'><span class="kt">int</span> <span class="n">PulseDetector</span><span class="o">::</span><span class="n">list_argmax</span><span class="p">(</span><span class="n">vector</span><span class="o">&lt;</span><span class="kt">double</span><span class="o">&gt;&amp;</span> <span class="n">data</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC482'>	<span class="kt">int</span> <span class="n">indmax</span><span class="p">;</span></div><div class='line' id='LC483'>	<span class="kt">double</span> <span class="n">argmax</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC484'>	<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">data</span><span class="p">.</span><span class="n">size</span><span class="p">();</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC485'>		<span class="k">if</span> <span class="p">(</span><span class="n">data</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">&gt;</span> <span class="n">argmax</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC486'>			<span class="n">argmax</span> <span class="o">=</span> <span class="n">data</span><span class="p">[</span><span class="n">i</span><span class="p">];</span></div><div class='line' id='LC487'>			<span class="n">indmax</span> <span class="o">=</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC488'>		<span class="p">}</span></div><div class='line' id='LC489'>	<span class="p">}</span></div><div class='line' id='LC490'>	<span class="k">return</span> <span class="n">indmax</span><span class="p">;</span></div><div class='line' id='LC491'><span class="p">}</span></div></pre></div></td>
         </tr>
       </table>
  </div>

  </div>
</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" class="js-jump-to-line-form">
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="button">Go</button>
  </form>
</div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer">
    <ul class="site-footer-links right">
      <li><a href="https://status.github.com/">Status</a></li>
      <li><a href="http://developer.github.com">API</a></li>
      <li><a href="http://training.github.com">Training</a></li>
      <li><a href="http://shop.github.com">Shop</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="/about">About</a></li>

    </ul>

    <a href="/">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
    </a>

    <ul class="site-footer-links">
      <li>&copy; 2014 <span title="0.07016s from github-fe139-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="/site/terms">Terms</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
        <li><a href="/contact">Contact</a></li>
    </ul>
  </div><!-- /.site-footer -->
</div><!-- /.container -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="fullscreen-contents js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped tooltipped-w" aria-label="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped tooltipped-w"
      aria-label="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-x close js-ajax-error-dismiss"></a>
      Something went wrong with that request. Please try again.
    </div>


      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/frameworks-e87aa86ffae369acf33a96bb6567b2b57183be57.js" type="text/javascript"></script>
      <script async="async" crossorigin="anonymous" src="https://assets-cdn.github.com/assets/github-100ee281915e20c71d6b0ff254fbbb70b3fcaf3a.js" type="text/javascript"></script>
      
      
        <script async src="https://www.google-analytics.com/analytics.js"></script>
  </body>
</html>

